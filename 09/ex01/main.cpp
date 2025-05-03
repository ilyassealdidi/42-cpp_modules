#include "RPN.hpp"
#include <iostream>
#include <cstdlib>

int main(int ac, char **argv) {
    try {
        if (ac != 2) {
            throw std::runtime_error("Invalid number of arguments\nUsage: ./rpn <expression>");
        }
        std::string expression = argv[1];
        int num = RPN::calculate(expression);
        std::cout << num << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}