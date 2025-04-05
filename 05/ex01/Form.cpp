#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

#pragma region Constructors and Destructor

Form::Form() : name("default"), isSigned(false), gradeToSign(0), gradeToExecute(0) {
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &other) {
    new (this) Form(other);
    return *this;
}

Form::~Form() {
}

#pragma endregion

#pragma region Getters

std::string Form::getName() const {
    return this->name;
}

bool Form::getIsSigned() const {
    return this->isSigned;
}

int Form::getGradeToExecute() const {
    return this->gradeToExecute;
}

int Form::getGradeTosign() const {
    return this->gradeToSign;   
}

#pragma endregion

#pragma region Setters

void Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

#pragma endregion

#pragma region Exceptions

const char *Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

#pragma endregion

#pragma region Overloaded Operators

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form " << form.getName() << " (" << (!form.getIsSigned() ? "not " : "") << "signed)" << std::endl;
    os << "Grade required to sign: " << form.getGradeTosign() << std::endl;
    os  << "Grade required to execute: " << form.getGradeToExecute() << std::endl;
    return os;
}

#pragma endregion