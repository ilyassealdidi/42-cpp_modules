#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal parameterized constructor called" << std::endl;
    this->type = type;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
    	this->type = other.type;
	}
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}
