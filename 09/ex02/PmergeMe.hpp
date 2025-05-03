#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <climits>
#include <ctime>
#include <string>
#include <iostream>

class PmergeMe
{
    private:
        std::vector<int> _vector;
        std::deque<int> _deque;
        double _vectorSortTime;
        double _dequeSortTime;

        int parseInt(const std::string& str);
        void sortVector();
        void sortDeque();
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe& operator=(const PmergeMe& obj);
        ~PmergeMe();
        
        void initializeLists(char **args);
        void sort();
        void printSorted() const;
};

#endif
