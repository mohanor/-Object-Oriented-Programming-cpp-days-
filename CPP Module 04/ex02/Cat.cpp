/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:30:19 by matef             #+#    #+#             */
/*   Updated: 2022/11/06 20:38:14 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    brain = new Brain();
    *this = obj;
}

Cat &Cat::operator= (const Cat &obj)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        type = obj.type;
        *brain = *obj.brain;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " : mew, mew" << std::endl;
}