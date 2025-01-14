#include "Animal.hpp"

Animal::Animal ()
{
    this->type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return (*this);
}

Animal::~Animal ()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound ( void ) const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType ( void ) const
{
    return (this->type);
}

