#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 1);
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}