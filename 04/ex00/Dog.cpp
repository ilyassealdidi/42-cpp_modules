#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;  
}

Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog ()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

std::string Dog::getType(void) const
{
    return (this->type);
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.getType();
    return (*this);
}