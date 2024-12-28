#include "Zombie.hpp"

int main() {
    Zombie* z = newZombie("Zombie1");
    z->announce();
    randomChump("Zombie2");
    delete z;
    return 0;
}
