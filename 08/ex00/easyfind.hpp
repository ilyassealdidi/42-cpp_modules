#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class NotFound : public std::exception
{
    public:
        virtual const char *what() const throw() {
            return ("The value not found.");
        }
};

template <typename T>
void easyfind(T& container, int value) {
    typename    T::iterator itr;
    
    itr = std::find(container.begin(), container.end(), value);
    if (itr == container.end())
        throw NotFound();
    std::cout << "The value is found." << std::endl;
}

#endif