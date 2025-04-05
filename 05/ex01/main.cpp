#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat = Bureaucrat("Ilyasse", 5);
        Form form = Form("Test", 4, 3);

        bureaucrat.signForm(form);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}