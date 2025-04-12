#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() { // Use commmand line arguments
    try 
    {
        Intern intern;
        Bureaucrat bureaucrat("Ilyasse", 1);

        AForm *form1 = intern.makeForm("robotomy request", "Bender");
        AForm *form2 = intern.makeForm("presidential pardon", "Fry");
        AForm *form3 = intern.makeForm("shrubbery creation", "Leela");
        AForm *form4 = intern.makeForm("unknown form", "Unknown");

        std::cout << std::endl;
        if (form1)
        {
            std::cout << *form1 << std::endl;
            delete form1;
        }
        if (form2)
        {
            std::cout << *form2 << std::endl;
            delete form2;
        }
        if (form3)
        {
            std::cout << *form3 << std::endl;
            delete form3;
        }
        if (form4)
        {
            std::cout << *form4 << std::endl;
            delete form4;
        }
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}