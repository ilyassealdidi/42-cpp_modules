#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    try 
    {
        Bureaucrat bureaucrat("Ilyasse", 1);
        ShrubberyCreationForm shrubberyCreation("home");
        PresidentialPardonForm presidentialPardon("Presidential Pardon");
        RobotomyRequestForm robotomyRequest("Robotomy Request");

        std::cout << "==============================================================" << std::endl;
        bureaucrat.signForm(shrubberyCreation);
        bureaucrat.executeForm(shrubberyCreation);
        std::cout << "==============================================================" << std::endl;
        bureaucrat.signForm(presidentialPardon);
        bureaucrat.executeForm(presidentialPardon);
        std::cout << "==============================================================" << std::endl;
        bureaucrat.signForm(robotomyRequest);
        bureaucrat.executeForm(robotomyRequest);
        std::cout << "==============================================================" << std::endl; 
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}