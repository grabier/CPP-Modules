#pragma once

# include <vector>
# include <deque>
# include <string>
# include <iostream>
# include <sstream>
# include <ctime>
# include <cstdlib>
# include <algorithm>
# include <sys/time.h>
# include <limits>
# include <cctype>

class PmergeMe{
	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		std::vector<int>	_originalVec;
		double				_vectorTime;
		double				_dequeTime;

		public:
		PmergeMe(void);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe(void);
		
		bool	_parseInput(int argc, char** argv);
		void	_displaySequence(const std::string& prefix, const std::vector<int>& seq) const;
		double	_getTime(void) const;
		void	_fordJohnsonVector(std::vector<int>& arr, int left, int right);
		void	_insertionSortVector(std::vector<int>& arr, int left, int right);
		void	_mergeVector(std::vector<int>& arr, int left, int mid, int right);
		void	_fordJohnsonDeque(std::deque<int>& arr, int left, int right);
		void	_insertionSortDeque(std::deque<int>& arr, int left, int right);
		void	_mergeDeque(std::deque<int>& arr, int left, int mid, int right);

		bool	initialize(int argc, char** argv);
		void	sort(void);
		void	displayResults(void) const;
		static std::vector<size_t> _generateJacobsthal(size_t n);
		static std::vector<size_t> _generateInsertionOrder(size_t pendingSize);
		static int _binarySearchVector(const std::vector<int>& arr, int value, int left, int right);
		static int _binarySearchDeque(const std::deque<int>& arr, int value, int left, int right);
		void _fordJohnsonVector(std::vector<int>& arr);
		void _fordJohnsonDeque(std::deque<int>& arr);
};
