/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:26:49 by matef             #+#    #+#             */
/*   Updated: 2022/10/23 09:14:49 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(str name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

str Zombie::getName( void )
{
    return this->name;
}

void Zombie::setName( str name )
{
    this->name = name;
}
