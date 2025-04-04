#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string type);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();

        virtual void makeSound(void) const;

		virtual std::string getType(void) const;
		virtual void setType(std::string type);
};

#endif