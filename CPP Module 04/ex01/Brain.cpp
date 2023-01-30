/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:18:05 by matef             #+#    #+#             */
/*   Updated: 2022/11/06 11:12:23 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator= (const Brain &obj)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &obj)
        for(int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    return *this;
}


Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}