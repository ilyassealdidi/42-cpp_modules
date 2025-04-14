#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void easyfind(T& container, int value) {
    typename    T::iterator itr;
    
    itr = std::find(container.begin(), container.end(), value);
    if (itr == container.end())
        throw std::runtime_error("Value not found");
    std::cout << "Value found." << std::endl;
}

#endif