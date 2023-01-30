/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:26:54 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 20:56:15 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
    private:
        std::string name;
        unsigned int hit;
        unsigned int energy;
        unsigned int damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &obj);
        ClapTrap &operator= (ClapTrap const &obj);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        void setName(std::string name);
        unsigned int getHit() const;
        void setHit(unsigned int hit);
        unsigned int getEnergy() const;
        void setEnergy (unsigned int energy);
        unsigned int getDamage() const;
        void setDamage(unsigned int damage);
};

#endif