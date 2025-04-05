#include "RobotomyRequestForm.hpp"

#pragma region Constructors and Destructor

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45) {
    this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm("RobotomyRequestForm", 72, 45) {
    *this = other;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45) {
    this->target = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    this->target = other.target;
    AForm::operator=(other); // Why?
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

#pragma endregion

#pragma region Getters

std::string RobotomyRequestForm::getTarget () const {
    return this->target;   
}

#pragma endregion

#pragma region Member Functions

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "loremipsumdolor... drilling noises..." << std::endl;
    static bool robotomized = false;
    if (!robotomized)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << this->target << " failed." << std::endl;
    robotomized = !robotomized;
}

#pragma endregion