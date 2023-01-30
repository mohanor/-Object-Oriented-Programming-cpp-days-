/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:09:34 by matef             #+#    #+#             */
/*   Updated: 2022/10/28 22:27:00 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon  &weapon) : weapon(weapon)
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~ HumanA()
{
}

std::string HumanA::getName() const
{
    return this->name;
}

void    HumanA::attack()
{
    std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl; 
}
