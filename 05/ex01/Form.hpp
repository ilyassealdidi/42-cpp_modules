#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
    private :
        std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

    public :
        Form();
        Form(const Form &other);
        Form(const std::string &name ,int gradeToSign, int gradeToExecute);
        Form &operator=(const Form &other);
        ~Form();

        std::string getName () const;
        bool getIsSigned() const;
        int getGradeTosign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat &b);

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

std::ostream& operator<<(std::ostream &os, const Form &form);

# endif