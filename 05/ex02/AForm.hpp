#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
    private :
        std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

    public :
        AForm();
        AForm(const AForm &other);
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
        AForm &operator=(const AForm &other);
        virtual ~AForm();

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeTosign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const = 0;

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
        class FormNotSignedException : public std::exception 
        {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<< (std::ostream &os, const AForm &form);

# endif