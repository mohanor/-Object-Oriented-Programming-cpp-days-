/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:27:41 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 10:40:12 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) // copy 
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &obj)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &obj)
    {
		this->name = obj.name;
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
	}
	return *this;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hit = 100;
	this->energy = 50; 
	this->damage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hit == 0 || this->energy == 0)
		return ;
    std::cout << "ScavTrap " << this->name << " attacks "<< target << " causing " << this->damage <<" points of damage! " << std::endl;
	this->energy--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate" << std::endl;
}
