#include "Bureaucrat.hpp"
#include <iostream>

#pragma region Constructors and Destructor

Bureaucrat::Bureaucrat() : name("bureaucrat"), grade(150) {
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
}

#pragma endregion

#pragma region Getters

std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

#pragma endregion

#pragma region Member Functions

void Bureaucrat::incrementGrade() {
    if (grade <= 1) {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade >= 150) {
        throw GradeTooLowException();
    }
    grade++;
}

#pragma endregion

#pragma region Exceptions

const char *Bureaucrat::GradeTooHighException::what () const throw()
{
    return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what () const throw()
{
    return "Grade is too low!";
}

#pragma endregion

#pragma region Overloaded Operators

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << "Bureaucrat " << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

#pragma endregion