#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat& operator=(const Bureaucrat &src);
        ~Bureaucrat();
};

#endif