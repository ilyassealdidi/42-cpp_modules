#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>

int main(int ac, char **argv) {
    try {
        if (ac != 1) {
            throw std::runtime_error("Invalid number of arguments\nUsage: ./PmergeMe [integer sequence]");
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}