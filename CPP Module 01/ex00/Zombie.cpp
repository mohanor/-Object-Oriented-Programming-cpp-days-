/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:24:40 by matef             #+#    #+#             */
/*   Updated: 2022/10/14 15:49:18 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
