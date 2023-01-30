/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:31:49 by matef             #+#    #+#             */
/*   Updated: 2022/11/01 12:10:46 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &obj);
        Dog &operator= (const Dog &obj);
        ~Dog();
        void makeSound() const;
};

#endif