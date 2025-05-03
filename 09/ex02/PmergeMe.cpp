#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe& obj) {
    *this = obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
    if (this != &obj) {
        _vector = obj._vector;
        _deque = obj._deque;
        _vectorSortTime = obj._vectorSortTime;
        _dequeSortTime = obj._dequeSortTime;
    }
    return *this;
}

PmergeMe::~PmergeMe() {

}

int PmergeMe::parseInt(const std::string& input) {
    if (input.empty()) {
        throw std::runtime_error("Error: Empty argument given");
    }
    char *ptr;
    long num = strtol(input.c_str(), &ptr, 10);

    if (*ptr != '\0' || num < 0 || num > INT_MAX)
        throw std::runtime_error("Error: Invalid argument");
    return num;
}

void PmergeMe::initializeLists(char **args) {
    int i = 0;
    while (args[i]) {
        std::string arg = args[i];
        int num = parseInt(arg);
        _vector.push_back(num);
        _deque.push_back(num);
        i++;
    }
}

void PmergeMe::sortVector() {
    std::clock_t start = std::clock();

    // Add Sorting Logic Here

    std::clock_t end = std::clock();
    _vectorSortTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::sortDeque() {
    std::clock_t start = std::clock();

    // Add Sorting Logic Here

    std::clock_t end = std::clock();
    _dequeSortTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::sort() {
    if (_vector.size() <= 1) {
        std::cout << "No sorting is needed." << std::endl;
        return;
    }
    sortDeque();
    sortVector();
}