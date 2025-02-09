#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        Animal(std::string type);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
		virtual void setType(std::string type);
};

#endif