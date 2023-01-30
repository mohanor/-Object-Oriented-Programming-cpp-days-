/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:27:45 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 20:59:29 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(ScavTrap const &obj);
        ScavTrap &operator= (ScavTrap const &obj);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};

#endif