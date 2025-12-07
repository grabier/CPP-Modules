#include "../BitcoinExchange.hpp"
#include <limits>

BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_data = other._data;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void){}

size_t	BitcoinExchange::getDatabaseSize(void) const { return _data.size(); }

std::string BitcoinExchange::_trim(const std::string& str) const
{
	size_t start = 0;
	size_t end = str.length();
	
	while (start < end && std::isspace(static_cast<unsigned char>(str[start])))
		start++;
	while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
		end--;
	
	return str.substr(start, end - start);
}

float BitcoinExchange::_stringToFloat(const std::string& str) const
{
	if (str.empty())
		return -1;
	bool hasDecimal = false;
	size_t start = 0;
	
	if (str[0] == '+' || str[0] == '-')
		start = 1;
	
	for (size_t i = start; i < str.length(); i++){
		if (str[i] == '.'){
			if (hasDecimal)//more than one decimal point
				return -1;
			hasDecimal = true;
		}
		else if (!std::isdigit(static_cast<unsigned char>(str[i]))){
			return -1;
		}
	}
	
	char* end;
	double value = std::strtod(str.c_str(), &end);
	
	while (*end && std::isspace(static_cast<unsigned char>(*end)))
		end++;
	
	if (*end != '\0')
		return -1;
	
	return static_cast<float>(value);
}

bool BitcoinExchange::_isLeapYear(int year) const{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::_isValidDate(const std::string& date) const{
	if (date.length() != 10)
		return false;
	
	if (date[4] != '-' || date[7] != '-')
		return false;
	
	for (size_t i = 0; i < date.length(); i++){
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(static_cast<unsigned char>(date[i])))
			return false;
	}
	
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (year < 1000 || year > 9999)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (_isLeapYear(year))
		daysInMonth[1] = 29;
	
	if (day > daysInMonth[month - 1])
		return false;
	
	return true;
}

bool BitcoinExchange::_isValidValue(float value) const{
	return value >= 0.0f && value <= 1000.0f;
}


std::string BitcoinExchange::_findClosestDate(const std::string& date) const{
	if (_data.empty())
		return "";
	
	std::map<std::string, float>::const_iterator it = _data.upper_bound(date);
	
	if (it == _data.begin())
		return "";
	
	--it;
	return it->first;
}

bool BitcoinExchange::loadDatabase(const std::string& filename){
	std::ifstream file(filename.c_str());
	
	if (!file.is_open()){
		std::cerr << "Error: could not open database file." << std::endl;
		return false;
	}
	
	std::string line;
	bool firstLine = true;
	int lineNumber = 0;
	
	while (std::getline(file, line)){
		lineNumber++;
		
		if (firstLine){
			firstLine = false;
			continue;
		}
		
		if (line.empty() || _trim(line).empty())
			continue;
		

		size_t commaPos = line.find(',');
		if (commaPos == std::string::npos)
			continue;
		
		std::string date = _trim(line.substr(0, commaPos));
		std::string valueStr = _trim(line.substr(commaPos + 1));
		
		if (date.empty() || valueStr.empty())
			continue;
		
		if (!_isValidDate(date))
			continue;
		
		float value = _stringToFloat(valueStr);
		if (value < 0)
			continue;
		
		_data[date] = value;
	}
	
	file.close();
	
	if (_data.empty()){
		std::cerr << "Error: database is empty or invalid." << std::endl;
		return false;
	}
	
	return true;
}

float BitcoinExchange::getExchangeRate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = _data.find(date);
	
	if (it != _data.end())
		return it->second;
	
	//gets you the closest element greater than date
	std::string closestDate = _findClosestDate(date);
	
	if (closestDate.empty())
		return -1;
	
	return _data.find(closestDate)->second;
}

void BitcoinExchange::processInputFile(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	
	if (!file.is_open()){
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}
	
	std::string line;
	bool firstLine = true;
	int i = 0;
	
	while (std::getline(file, line)){
		if (firstLine){
			firstLine = false;
			continue;
		}
		
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos){
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		
		std::string date = _trim(line.substr(0, pipePos));
		std::string valueStr = _trim(line.substr(pipePos + 1));
		
		if (!_isValidDate(date)){
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
	
		float value = _stringToFloat(valueStr);
		
		if (value < 0){
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		
		if (!_isValidValue(value)){
			std::cerr << "on line" << i << " Error: too large a number." << std::endl;
			i++;
			continue;
		}
		float rate = getExchangeRate(date);
		if (rate < 0){
			std::cerr << "Error: no exchange rate available for date." << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
		i++;
	}
	
	file.close();
}