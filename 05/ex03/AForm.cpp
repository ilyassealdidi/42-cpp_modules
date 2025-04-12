#include "AForm.hpp"

#pragma region Constructors and destructor
AForm::AForm() : gradeToSign (0) , gradeToExecute(0) {
}

AForm::AForm (const std::string &name, int gradeToSign, int gradeToExecute)
    : gradeToSign(gradeToSign),
      gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->name = name;
    this->isSigned = false;
}

AForm::AForm(const AForm &other) 
    : name(other.name),
      isSigned(other.isSigned),
      gradeToSign(other.gradeToSign),
      gradeToExecute(other.gradeToExecute) {
}

AForm &AForm::operator=(const AForm &other) {
    this->name = other.name;
    return (*this);
}

AForm::~AForm() {
}
#pragma endregion

#pragma region Getters
std::string AForm::getName() const {
    return (this->name);
}

bool AForm::getIsSigned() const {
    return (this->isSigned);
}

int AForm::getGradeToExecute() const {
    return (this->gradeToExecute);
}

int AForm::getGradeTosign() const {
    return (this->gradeToSign);   
}
#pragma endregion

#pragma region Member Functions
void AForm::beSigned(Bureaucrat &b) {
    if (b.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    isSigned = true;
}
#pragma endregion

#pragma region Exceptions
const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

const char *AForm::FormNotSignedException::what() const throw() {
    return ("Form is not signed!");
}
#pragma endregion

#pragma region Overloaded Operators
std::ostream &operator<<(std::ostream &os, const AForm &form) {
    os << "Form " << form.getName() << " (" << (!form.getIsSigned() ? "not " : "") << "signed)" << std::endl;
    os << "Grade required to sign: " << form.getGradeTosign() << std::endl;
    os  << "Grade required to execute: " << form.getGradeToExecute() << std::endl;
    return os;
}
#pragma endregion