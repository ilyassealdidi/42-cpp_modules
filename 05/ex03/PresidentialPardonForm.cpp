#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
    this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5) {
    this->target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::FormNotSignedException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){}