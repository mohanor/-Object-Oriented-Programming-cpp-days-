/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:17:39 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 02:03:19 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class  HumanA
{
    private:
        std::string name;
        Weapon  &weapon;

    public:
        HumanA(Weapon  &weapon);
        HumanA(std::string name, Weapon &weapon);
        ~ HumanA();
        void    attack();
        std::string getName() const;
};


#endif