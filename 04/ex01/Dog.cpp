#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog parameterized constructor called" << std::endl;
    this->type = "Dog";
	brain = new Brain();
}

Dog::Dog(std::string type)
{
    std::cout << "Dog parameterized constructor called" << std::endl;
    this->type = type;
	brain = new Brain();
}

Dog::~Dog ()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
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
	if (this != &obj)
	{
		this->type = obj.getType();
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
    return (*this);
}