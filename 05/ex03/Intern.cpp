#include "Intern.hpp"

#pragma region Constructors and Destructor

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

#pragma endregion

#pragma region Member Functions

AForm *Intern::createPresidential(const std::string& name)
{
	return (new PresidentialPardonForm(name));
}

AForm *Intern::createRobotomy(const std::string& name)
{
	return (new RobotomyRequestForm(name));
}

AForm *Intern::createShrubbery(const std::string& name)
{
	return (new ShrubberyCreationForm(name));
}

AForm *Intern::makeForm(const std::string& formName, const std::string& target) {
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    FormCreator creators[] = {
        &Intern::createShrubbery,
        &Intern::createRobotomy,
        &Intern::createPresidential
    };

    for (int i = 0; i < 3; i++){
        if (formNames[i] == formName){
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*creators[i])(target);
        }
    }
    std::cout << "The form " << formName << " don't exist." << std::endl;
    return NULL;
}

#pragma endregion
