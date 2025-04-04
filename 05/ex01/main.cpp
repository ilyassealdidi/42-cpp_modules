#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat bureaucrat = Bureaucrat("Ilyasse", 5);
		Form form = Form("Test", 4, 3);
		bureaucrat.signForm(form);
	} catch(std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
    return 0;
}