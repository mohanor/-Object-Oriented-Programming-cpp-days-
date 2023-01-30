
#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
}

std::string HumanB::getName() const
{
    return this->name;
}

void    HumanB::attack()
{
    if (this->weapon)
        std::cout << this->getName() << " attacks with their " << this->weapon->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon  weapon)
{
    this->weapon = &weapon;
}
