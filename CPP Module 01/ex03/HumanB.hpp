/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:13:46 by matef             #+#    #+#             */
/*   Updated: 2022/10/23 11:00:26 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class  HumanB
{
    private:
        std::string name;
        Weapon  *weapon;
        
    public:
        HumanB();
        HumanB(std::string name);
        ~ HumanB();
        void    attack();
        std::string getName() const;
        void setWeapon(Weapon  weapon);
};

#endif
