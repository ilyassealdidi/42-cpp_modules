#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private :
		Brain *brain;
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat &obj);
        Cat &operator=(const Cat &obj);
        ~Cat();

        void makeSound () const;

		std::string getType ( void ) const;
		void setType(std::string type);
};

#endif