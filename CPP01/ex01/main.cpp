#include "Zombie.hpp"

int main() {
    int num = 5;
    Zombie* zombies = zombieHorde(num, "Zombie");
    for (int i = 0; i < num; i++)
        zombies.announce();
    delete [] zombies;
    return 0;
}
