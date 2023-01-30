/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:27:02 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 19:32:00 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap = ClapTrap("clap");
    ClapTrap trap = ClapTrap("trap");

    clap.attack("trap");
    clap.beRepaired(10);
    clap.attack("trap");
    clap.attack("trap");
    trap.takeDamage(10);
    trap.attack("clap");

    return 0;
}