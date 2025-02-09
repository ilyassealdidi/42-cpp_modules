#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	this->type = type;
	std::cout << "WrongCat parameterized constructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void WrongCat::setType(std::string type)
{
	this->type = type;
}
