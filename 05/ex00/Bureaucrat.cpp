#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade) {
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

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src) {
    if (this != &src) {
        this->grade = src.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

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

const char *Bureaucrat::GradeTooHighException::what () const throw()
{
    return ("Bureaucrat grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what () const throw()
{
    return "Bureaucrat grade is too low!";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
