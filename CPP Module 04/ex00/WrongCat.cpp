/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:11:14 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 19:14:00 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator= (const WrongCat &obj)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void WrongCat::makeSound()
{
    std::cout << "WrongCat : meow, meow" << std::endl;
}
