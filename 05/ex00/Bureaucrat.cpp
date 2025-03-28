#include "Bureaucrat.hpp"

#include <iostream>

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade) {
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    std::cout << "Parameterized constructor called" << std::endl;
    if (grade < 1 || grade > 150) {
        throw std::out_of_range("Grade must be between 1 and 150");
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src) {
        this->grade = src.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called" << std::endl;
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
