#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private :
		Brain *brain;
    public :
        Dog();
        Dog(const Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog();
        Dog(std::string type);
        void makeSound() const;
        std::string getType(void) const;
        void setType (std::string type);	
};

#endif