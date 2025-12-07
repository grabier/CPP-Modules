#include "../PmergeMe.hpp"

int main(int argc, char** argv)
{
	PmergeMe sorter;

	if (!sorter.initialize(argc, argv))
		return 1;
	sorter.sort();
	sorter.displayResults();
	
	return 0;
}