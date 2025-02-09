#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called" << std::endl;
    this->type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}

AAnimal::AAnimal(std::string type)
{
    std::cout << "AAnimal parameterized constructor called" << std::endl;
    this->type = type;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
    	this->type = other.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

void AAnimal::setType(std::string type)
{
	this->type = type;
}
