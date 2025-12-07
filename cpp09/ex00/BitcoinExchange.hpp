#pragma once
# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <cctype>
# include <algorithm>

class BitcoinExchange{
	private:
		std::map<std::string, float>	_data;
		
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange(void);
		
		bool		_isValidDate(const std::string& date) const;
		bool		_isValidValue(float value) const;
		bool		_isLeapYear(int year) const;
		float		_stringToFloat(const std::string& str) const;
		std::string	_trim(const std::string& str) const;
		std::string	_findClosestDate(const std::string& date) const;

		bool	loadDatabase(const std::string& filename);
		void	processInputFile(const std::string& filename);
		float	getExchangeRate(const std::string& date) const;
		
		size_t	getDatabaseSize(void) const;
};
