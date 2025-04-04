#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    int num = 10;
    AAnimal *animals[num];

    for (int i = 0; i < num; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
    }

    for (int i = 0; i < num ; i++)
        delete animals[i];
    return 0;
}
