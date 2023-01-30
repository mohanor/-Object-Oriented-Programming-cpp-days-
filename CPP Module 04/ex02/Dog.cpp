/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:31:25 by matef             #+#    #+#             */
/*   Updated: 2022/11/06 20:38:45 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain();
    *this = obj;
}

Dog &Dog::operator= (const Dog &obj)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        type = obj.type;
        *brain = *obj.brain;
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " : woof, woof" << std::endl;
}
