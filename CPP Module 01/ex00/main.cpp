#include "Zombie.hpp"


int main()
{
    Zombie *zombie = newZombie("Foo");
    zombie->announce();
    randomChump("matef");
    delete zombie;
    return 0;
}