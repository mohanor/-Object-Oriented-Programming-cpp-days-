/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:03:29 by matef             #+#    #+#             */
/*   Updated: 2022/11/06 18:04:51 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();


    std::cout << "\n------WrongAnimal-------\n" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    
    const WrongAnimal* wrongi = new WrongCat();
    
    std::cout << wrongMeta->getType() << " " << std::endl;
    
    wrongMeta->makeSound();
    wrongi->makeSound();

    return 0;
}

