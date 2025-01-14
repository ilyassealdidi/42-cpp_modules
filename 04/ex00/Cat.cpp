#include "Cat.hpp"

Cat::Cat ()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;  
}

Cat::Cat(std::string type)
{
    this->type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat ()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound ( void ) const
{
    std::cout << "Miaw Miaw" << std::endl;
}

std::string Cat::getType ( void ) const
{
    return (this->type);
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.getType();
    return (*this);
}