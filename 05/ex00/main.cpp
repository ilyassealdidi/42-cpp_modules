#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 2), bureaucrat2("Jane Doe", 150);

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat2.decrementGrade();
        std::cout << bureaucrat2 << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}