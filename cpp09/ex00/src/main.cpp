#include "../BitcoinExchange.hpp"

int main(int argc, char** argv){
	if (argc != 2){
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange btc;
	
	if (!btc.loadDatabase("data.csv")){
		std::cerr << "Error: failed to load database." << std::endl;
		return 1;
	}
	std::cout << "Database loaded: " << btc.getDatabaseSize() << " entries" << std::endl;
	btc.processInputFile(argv[1]);
	return 0;
}