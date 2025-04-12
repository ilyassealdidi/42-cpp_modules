#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void signForm(Form &form);
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception
        {
            public :
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif