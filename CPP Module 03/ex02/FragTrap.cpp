/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:01:50 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 19:45:04 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "anonymous";
	this->hit = 100;
	this->energy = 100; 
	this->damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	this->hit = 100;
	this->energy = 100; 
	this->damage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
}

FragTrap &FragTrap::operator= (FragTrap const &obj)
{
	if (this != &obj)
    {
		this->name = obj.name;
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
	}
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->hit == 0 || this->energy == 0)
		return ;
    std::cout << "FragTrap " << this->name << " attacks "<< target << " causing " << this->damage <<" points of damage! " << std::endl;
	this->energy--;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->name << " : give me high fives" << std::endl;
}