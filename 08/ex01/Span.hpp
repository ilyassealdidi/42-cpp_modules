#ifndef APAN_HPP
#define APAN_HPP

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
        void    addSpan(std::vector<int> vec);

        class   OutOfSize : public std::exception{
            virtual const char *what() const throw(){
                return ("The Span is full.");
            }
        };
        class   SpanExeption : public std::exception{
            virtual const char *what() const throw(){
                return ("Not enough numbers to find a span.");
            }
        };
};

#endif