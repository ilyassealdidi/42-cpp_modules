#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &other) {
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    return *this;
}

Intern::~Intern() {
}

AForm *Intern::makeForm(std::string formName, std::string target) {
    AForm *form = nullptr;

    if (formName == "robotomy request") {
        form = new RobotomyRequestForm(target);
    } else if (formName == "presidential pardon") {
        form = new PresidentialPardonForm(target);
    } else if (formName == "shrubbery creation") {
        form = new ShrubberyCreationForm(target);
    } else {
        std::cout << "Intern can't create " << formName << std::endl;
    }
    return form;
}

std::ostream &operator<<(std::ostream &os, const Intern &intern) {
    (void)intern;
    os << "Intern" << std::endl;
    return os;
}
