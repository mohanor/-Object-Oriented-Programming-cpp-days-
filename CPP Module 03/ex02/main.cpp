/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:01:57 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 20:08:14 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    
    FragTrap obj1("FragTrap_1");
    FragTrap obj2("FragTrap_2");

    obj1.attack("FragTrap_1");
    obj1.beRepaired(10);
    obj1.attack("FragTrap_1");
    obj1.attack("FragTrap_1");
    obj2.takeDamage(1000);
    obj2.attack("FragTrap_2");
    obj2.highFivesGuys();

    return 0;
}