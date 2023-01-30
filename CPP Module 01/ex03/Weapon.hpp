/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:05:41 by matef             #+#    #+#             */
/*   Updated: 2022/10/23 10:50:57 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string getType() const;
        void setType(std::string type);
};


#endif