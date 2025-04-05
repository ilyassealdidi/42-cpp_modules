#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other),
      target(other.target) {
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string& target) : AForm("ShrubberyCreationForm", 145, 137) {
    this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    this->target = other.target;
    AForm::operator=(other);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string ShrubberyCreationForm::getTarget() const {
    return (this->target);   
}

const char *ShrubberyCreationForm::FileNotOpenedException::what() const throw() {
    return ("File not opened");
}

void ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const {
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
    if (bureaucrat.getGrade() > this->getGradeToExecute())
        throw ShrubberyCreationForm::GradeTooLowException();
    std::ofstream outfile ((this->target + "_shrubbery").c_str());

    if (outfile.is_open() == false)
        throw ShrubberyCreationForm::FileNotOpenedException();

    std::cout << "        *        " << std::endl;
    std::cout << "       ***       " << std::endl;
    std::cout << "      *****      " << std::endl;
    std::cout << "     *******     " << std::endl;
    std::cout << "    *********    " << std::endl;
    std::cout << "   ***********   " << std::endl;
    std::cout << "  *************  " << std::endl;
    std::cout << " *************** " << std::endl;
    std::cout << "        |        " << std::endl;
    std::cout << "        |        " << std::endl;
    std::cout << "     -------     " << std::endl;

}

