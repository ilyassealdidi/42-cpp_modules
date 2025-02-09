#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(std::string type)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = type;
	this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaw Miaw" << std::endl;
}

std::string Cat::getType(void) const
{
    return (this->type);
}

void Cat::setType(std::string type)
{
	this->type = type;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
    return (*this);
}