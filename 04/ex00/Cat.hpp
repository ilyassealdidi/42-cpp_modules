#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &obj);
        Cat &operator=(const Cat &obj);
        ~Cat();
        Cat(std::string type);
        void makeSound () const;
        std::string getType ( void ) const;
        
};

#endif