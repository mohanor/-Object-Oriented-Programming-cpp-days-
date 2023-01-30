/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:26:51 by matef             #+#    #+#             */
/*   Updated: 2022/11/03 20:55:42 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "none";
	this->hit = 10;
	this->energy = 10; 
	this->damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hit = 10;
	this->energy = 10; 
	this->damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &obj)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &obj)
    {
		this->name = obj.name;
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
	}
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
	if (this->hit == 0 || this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << "  : i can't do anything" << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << this->name << " attacks "<< target << " causing " << this->damage <<" points of damage! " << std::endl;
	this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit == 0 || this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << "  : is die" << std::endl;
		return ;
	}
	if (amount > this->hit)
		this->hit = 0;
	else
	{
		std::cout << "ClapTrap " << this->name << " : take damage causing " << amount << " of hit!" << std::endl;
		this->hit -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit == 0 || this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << "  : can't do anything" << std::endl;
		return ;
	}
	this->hit += amount;
	this->energy--;
}

std::string ClapTrap::getName() const
{
	return this->name;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

unsigned int ClapTrap::getHit() const
{
	return this->hit;
}

void ClapTrap::setHit(unsigned int hit)
{
	this->hit = hit;
}

unsigned int ClapTrap::getEnergy() const
{
	return this->energy;
}

void ClapTrap::setEnergy (unsigned int energy)
{
	this->energy = energy;
}

unsigned int ClapTrap::getDamage() const
{ 
	return this->damage;	
}

void ClapTrap::setDamage(unsigned int damage)
{
	this->damage = damage;	
}
