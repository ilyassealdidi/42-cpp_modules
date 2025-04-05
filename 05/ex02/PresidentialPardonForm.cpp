#include "PresidentialPardonForm.hpp"

#pragma region Constructors and Destructor

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("Presidential Pardon Form", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), target(other.target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    this->target = other.target;
    AForm::operator=(other); // Why
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("Presidential Pardon Form", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

#pragma endregion

#pragma region Member Functions

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

#pragma endregion