#include "Span.hpp"

Span::Span(): N(0){
}

Span::Span(unsigned int n): N(n){
}

Span& Span::operator=(const Span& obj){
    if (this != &obj){
        this->N = obj.getN();
        this->list = obj.list;
    }
	return *this;
}

Span::Span(const Span& obj){
    *this = obj;
}

Span::~Span(){
}

unsigned int Span::getN() const{
    return this->N;
}

void	Span::addNumber(int nbr){
	if (list.size() >= this->N)
        throw OutOfSize();
    list.push_back(nbr);
}

size_t Span::shortestSpan() const{
    std::vector<int> listtmp = list;
    size_t shortSpan;
    size_t tmp;
    size_t  i;

    if (list.size() < 2)
        throw SpanExeption();
    i = 1;
    std::sort(listtmp.begin(), listtmp.end());
    shortSpan = longestSpan();
    while (i < listtmp.size()){
        tmp = std::abs(listtmp[i] - listtmp[i - 1]);
        shortSpan = std::min(shortSpan, tmp);
        i++;
    }
    return shortSpan;
}

size_t Span::longestSpan() const{
    size_t longeSpan;
    size_t max;
    size_t min;

    if (list.size() < 2)
        throw SpanExeption();
    max = *std::max_element(list.begin(), list.end());
    min = *std::min_element(list.begin(), list.end());
    longeSpan = max - min;
    return longeSpan;
}

void    Span::addSpan(std::vector<int> vec){
    if (N - list.size() < vec.size())
        throw OutOfSize();
    std::vector<int>::iterator itr = vec.begin();
    while(itr != vec.end()){
        addNumber(*itr);
        itr++;
    }
}

std::vector<int>* Span::getList(){
    return &this->list;
}