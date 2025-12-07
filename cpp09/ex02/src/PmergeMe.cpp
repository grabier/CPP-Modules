#include "../PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _vectorTime(0.0), _dequeTime(0.0){}

PmergeMe::PmergeMe(const PmergeMe& other): _vector(other._vector), _deque(other._deque),
	_originalVec(other._originalVec),
	_vectorTime(other._vectorTime), _dequeTime(other._dequeTime){}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other){
		_vector = other._vector;
		_deque = other._deque;
		_originalVec = other._originalVec;
		_vectorTime = other._vectorTime;
		_dequeTime = other._dequeTime;
	}
	return *this;
}

PmergeMe::~PmergeMe(void){}

double PmergeMe::_getTime(void) const
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000.0 + tv.tv_usec);
}

bool PmergeMe::_parseInput(int argc, char** argv)
{
	for (int i = 1; i < argc; i++){
		std::string arg = argv[i];

		if (arg.empty()){
			std::cerr << "Error: empty input" << std::endl;
			return false;
		}

		for (size_t j = 0; j < arg.length(); j++){
			if (!std::isdigit(static_cast<unsigned char>(arg[j]))){
				std::cerr << "Error: not a digit" << std::endl;
				return false;
			}
		}
		char* end;
		long num = std::strtol(arg.c_str(), &end, 10);
		if (num < 0 || num > std::numeric_limits<int>::max()){
			std::cerr << "Error: out of bounds" << std::endl;
			return false;
		}
		
		_vector.push_back(static_cast<int>(num));
		_deque.push_back(static_cast<int>(num));
	}
	
	return true;
}

void PmergeMe::_displaySequence(const std::string& prefix, const std::vector<int>& seq) const
{
	std::cout << prefix;
	
	size_t displayCount = seq.size();
	
	for (size_t i = 0; i < displayCount; i++)
		std::cout << " " << seq[i];
	
	std::cout << std::endl;
}

std::vector<size_t> PmergeMe::_generateJacobsthal(size_t n)
{
	std::vector<size_t> jacobsthal;
	
	if (n == 0)
		return jacobsthal;
	
	jacobsthal.push_back(0);
	if (n == 1)
		return jacobsthal;
		
	jacobsthal.push_back(1);
	
	while (true){//J(n)=J(n-1)+2*J(n-2): 0, 1, 1, 3, 5, 11, 21, 43
		size_t next = jacobsthal[jacobsthal.size() - 1] + 
					  2 * jacobsthal[jacobsthal.size() - 2];
		if (next >= n)
			break;
		jacobsthal.push_back(next);
	}
	
	return jacobsthal;
}

std::vector<size_t> PmergeMe::_generateInsertionOrder(size_t pendingSize)
{
	std::vector<size_t> order;
	std::vector<size_t> jacobsthal = _generateJacobsthal(pendingSize + 1);
	std::vector<bool> used(pendingSize, false);

	//for each interval between jacobsthal numbers, insert in descendign order
	for (size_t i = 2; i < jacobsthal.size(); i++){
		size_t current = jacobsthal[i];
		size_t prev = jacobsthal[i - 1];
		
		//insert from current-1 to prev(descending)
		for (size_t j = current - 1; j >= prev && j < pendingSize; j--){
			if (!used[j]){
				order.push_back(j);
				used[j] = true;
			}
			if (j == 0)
				break;
		}
	}

	for (size_t i = 0; i < pendingSize; i++){
		if (!used[i])
			order.push_back(i);
	}
	
	return order;
}

//to find insertion pos
int PmergeMe::_binarySearchVector(const std::vector<int>& arr, int value, int left, int right)
{
	while (left <= right){
		int mid = left + (right - left) / 2;
		
		if (arr[mid] == value)
			return mid;
		else if (arr[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return left;
}

void PmergeMe::_fordJohnsonVector(std::vector<int>& arr)
{
	size_t n = arr.size();

	if (n <= 1)
		return;
	if (n == 2){
		if (arr[0] > arr[1])
			std::swap(arr[0], arr[1]);
		return;
	}
	
	//pair elements and compare
	std::vector<std::pair<int, int> > pairs;
	bool hasStraggler = (n % 2 == 1);
	int straggler = hasStraggler ? arr[n - 1] : 0;
	
	for (size_t i = 0; i + 1 < n; i += 2){
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	//we reursively sort the biggest elements of each pair
	std::vector<int> mainChain;
	std::vector<int> pending;
	
	for (size_t i = 0; i < pairs.size(); i++)
		mainChain.push_back(pairs[i].first);
	
	//recursicely ordering main chan
	if (mainChain.size() > 1)
		_fordJohnsonVector(mainChain);
	
	//create pending list(smaller of each pair)
	std::vector<std::pair<int, int> > pendingWithPartner;//create pending, and asociate with the inmediate
	//greater pair
	for (size_t i = 0; i < pairs.size(); i++){
		//find the greatest pair in main and associate to pending
		int larger = pairs[i].first;
		int smaller = pairs[i].second;
		
		for (size_t j = 0; j < mainChain.size(); j++){
			if (mainChain[j] == larger){
				pendingWithPartner.push_back(std::make_pair(smaller, j));
				break;
			}
		}
	}
	
	//insert first pending element in begining
	if (!pendingWithPartner.empty()){
		mainChain.insert(mainChain.begin(), pendingWithPartner[0].first);
		
		//update partners index
		for (size_t i = 0; i < pendingWithPartner.size(); i++)
			pendingWithPartner[i].second++;
		
		pendingWithPartner.erase(pendingWithPartner.begin());
	}
	
	//binary insert pending using jacobsthal
	std::vector<size_t> insertionOrder = _generateInsertionOrder(pendingWithPartner.size());
	
	for (size_t i = 0; i < insertionOrder.size(); i++){
		size_t idx = insertionOrder[i];
		int value = pendingWithPartner[idx].first;
		int partnerPos = pendingWithPartner[idx].second;
		
		//binary insertion till partner pos
		int pos = _binarySearchVector(mainChain, value, 0, partnerPos);
		mainChain.insert(mainChain.begin() + pos, value);

		//update position of partners
		for (size_t j = 0; j < pendingWithPartner.size(); j++){
			if (pendingWithPartner[j].second >= pos)
				pendingWithPartner[j].second++;
		}
	}
	
	//if theres a straggler(odd number of elements) we insert it in the end
	if (hasStraggler){
		int pos = _binarySearchVector(mainChain, straggler, 0, mainChain.size() - 1);
		mainChain.insert(mainChain.begin() + pos, straggler);
	}
	arr = mainChain;
}

int PmergeMe::_binarySearchDeque(const std::deque<int>& arr, int value, int left, int right)
{
	while (left <= right){
		int mid = left + (right - left) / 2;
		
		if (arr[mid] == value)
			return mid;
		else if (arr[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return left;
}

void PmergeMe::_fordJohnsonDeque(std::deque<int>& arr)
{
	size_t n = arr.size();
	
	if (n <= 1)
		return;
	
	if (n == 2){
		if (arr[0] > arr[1])
			std::swap(arr[0], arr[1]);
		return;
	}
	
	std::vector<std::pair<int, int> > pairs;
	bool hasStraggler = (n % 2 == 1);
	int straggler = hasStraggler ? arr[n - 1] : 0;
	
	for (size_t i = 0; i + 1 < n; i += 2){
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}
	
	std::deque<int> mainChain;
	
	for (size_t i = 0; i < pairs.size(); i++)
		mainChain.push_back(pairs[i].first);
	
	if (mainChain.size() > 1)
		_fordJohnsonDeque(mainChain);
	
	std::vector<std::pair<int, int> > pendingWithPartner;
	for (size_t i = 0; i < pairs.size(); i++){
		int larger = pairs[i].first;
		int smaller = pairs[i].second;
		
		for (size_t j = 0; j < mainChain.size(); j++){
			if (mainChain[j] == larger){
				pendingWithPartner.push_back(std::make_pair(smaller, j));
				break;
			}
		}
	}
	
	if (!pendingWithPartner.empty()){
		mainChain.push_front(pendingWithPartner[0].first);
		
		for (size_t i = 0; i < pendingWithPartner.size(); i++)
			pendingWithPartner[i].second++;
		
		pendingWithPartner.erase(pendingWithPartner.begin());
	}
	
	std::vector<size_t> insertionOrder = _generateInsertionOrder(pendingWithPartner.size());
	
	for (size_t i = 0; i < insertionOrder.size(); i++){
		size_t idx = insertionOrder[i];
		int value = pendingWithPartner[idx].first;
		int partnerPos = pendingWithPartner[idx].second;
		
		int pos = _binarySearchDeque(mainChain, value, 0, partnerPos);
		mainChain.insert(mainChain.begin() + pos, value);
		
		for (size_t j = 0; j < pendingWithPartner.size(); j++){
			if (pendingWithPartner[j].second >= pos)
				pendingWithPartner[j].second++;
		}
	}
	
	if (hasStraggler){
		int pos = _binarySearchDeque(mainChain, straggler, 0, mainChain.size() - 1);
		mainChain.insert(mainChain.begin() + pos, straggler);
	}
	
	arr = mainChain;
}

bool PmergeMe::initialize(int argc, char** argv)
{
	if (argc < 2){
		std::cerr << "Error" << std::endl;
		return false;
	}
	
	if (!_parseInput(argc, argv))
		return false;
	
	_originalVec = _vector;
	return true;
}

void PmergeMe::sort(void)
{
	double start = _getTime();
	_fordJohnsonVector(_vector);
	double end = _getTime();
	_vectorTime = end - start;
	
	start = _getTime();
	_fordJohnsonDeque(_deque);
	end = _getTime();
	_dequeTime = end - start;
}

void PmergeMe::displayResults(void) const
{
	_displaySequence("Before:", _originalVec);
	_displaySequence("After:", _vector);

	std::cout << "Time to process a range of " << _vector.size() 
		<< " elements with std::vector : " 
		<< _vectorTime << " us" << std::endl;
	
	std::cout << "Time to process a range of " << _deque.size() 
		<< " elements with std::deque : " 
		<< _dequeTime << " us" << std::endl;
}
