#include "Span.hpp"

#pragma region Constructors and Destructor

Span::Span(): N(0) {
}

Span::Span(unsigned int n): N(n) {
}

Span& Span::operator=(const Span& obj) {
    if (this != &obj) {
        this->N = obj.getN();
        this->list = obj.list;
    }
	return *this;
}

Span::Span(const Span& obj) {
    *this = obj;
}

Span::~Span() {
}

#pragma endregion

#pragma region Getters

unsigned int Span::getN() const{
    return this->N;
}

std::vector<int>* Span::getList() {
    return &this->list;
}

#pragma endregion

#pragma region Member Functions

void	Span::addNumber(int nbr) {
	if (list.size() >= this->N)
        throw std::runtime_error("The Span is full.");
    list.push_back(nbr);
}

size_t Span::shortestSpan() const{
    if (list.size() < 2)
        throw std::runtime_error("Need at least two numbers to calculate span.");

    std::vector<int> listtmp = list;
    std::sort(listtmp.begin(), listtmp.end());

    std::vector<int>::iterator it = listtmp.begin() + 1;

    size_t tmp;
    size_t shortSpan = this->longestSpan();
    while (it != listtmp.end()) {
        tmp = std::abs(*it - *(it - 1));
        shortSpan = std::min(shortSpan, tmp);

        it++;
    }
    return shortSpan;
}

size_t Span::longestSpan() const{
    if (list.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span.");

    size_t max = *std::max_element(list.begin(), list.end());
    size_t min = *std::min_element(list.begin(), list.end());
    return (max - min);
}

#pragma endregion