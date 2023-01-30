/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:51:51 by matef             #+#    #+#             */
/*   Updated: 2022/11/12 16:45:35 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::~Base()
{
}


Base * Base::generate(void)
{
    srand(time(NULL));
    int r = rand() % 3;

    switch (r)
    {
        case 0:
            std::cout << "object type : A created\n";
            return new A();
        case 1:
            std::cout << "object type : B created\n";
            return new B();
        case 2:
            std::cout << "object type : C created\n";
            return new C();
    }
    return NULL;
}

void Base::identify(Base* p)
{
    if (p == NULL)
    {
        std::cout << "P NULL <ENTRE NO NULL POINTER>" << std::endl;
        return;
    }
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "Type of object is A\n";
    if (b)
        std::cout << "Type of object is B\n";
    if (c)
        std::cout << "Type of object is C\n";
}

void Base::identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Type of object is A\n";
        (void) a;
    }
    catch(const std::exception& e)
    {}
    
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Type of object is B\n";
        (void) b;
    }
    catch(const std::exception& e)
    {}

    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Type of object is C\n";
        (void) c;
    }
    catch(const std::exception& e)
    {}
}