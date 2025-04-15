#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span
{
    private:
        std::vector<int>    list;
        unsigned int        N;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span();

        unsigned int getN() const;
        std::vector<int>* getList();

        size_t shortestSpan() const;
        size_t longestSpan() const;

        void    addNumber(int nbr);

        template <typename Iterator>
        void addNumber(Iterator begin, Iterator end) {
            if (list.size() + std::distance(begin, end) > N) {
                throw std::out_of_range("Not enough space in Span to add all numbers");
            }
            list.insert(begin, end);
        }
};

#endif