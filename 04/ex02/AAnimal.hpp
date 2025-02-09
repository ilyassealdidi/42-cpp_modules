#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
class AAnimal 
{
    protected :
        std::string type;
    public :
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        AAnimal(std::string type);
        virtual void makeSound(void) const = 0;
        virtual std::string getType(void) const;
		virtual void setType(std::string type);
};

#endif