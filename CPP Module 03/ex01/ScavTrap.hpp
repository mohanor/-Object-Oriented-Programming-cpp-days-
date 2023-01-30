/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:27:25 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 18:30:39 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap const &obj);
        ScavTrap &operator= (ScavTrap const &obj);
        ScavTrap(std::string name);
        void guardGate();
        void attack(const std::string& target);
};