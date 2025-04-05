#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        ~Intern();

        AForm *createPresidential(const std::string& name);
        AForm *createRobotomy(const std::string& name);
        AForm *createShrubbery(const std::string& name);
        AForm *makeForm(const std::string& formName, const std::string& target);
};

typedef AForm* (Intern::*FormCreator)(const std::string&);

#endif