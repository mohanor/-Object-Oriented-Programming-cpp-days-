/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:03:26 by matef             #+#    #+#             */
/*   Updated: 2022/11/06 20:31:18 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal &Animal::operator= (const Animal &obj)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound" << std::endl;
}

std::string    Animal::getType() const
{
    return this->type;
}

void    Animal::setType(std::string type)
{
    this->type = type;
}
