#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete cat;
	delete dog;
	return 0;
}
