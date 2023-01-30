/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:26 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 19:52:27 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("matef", 150);
        std::cout << a << std::endl;
        // a.increment();
        // std::cout << a << std::endl;
        // a.increment();
        // std::cout << a << std::endl;
        // a.increment();
        std::cout << a << std::endl;
        a.decrement();
        std::cout << a << std::endl;
        a.decrement();
        std::cout << a << std::endl;
        a.decrement();
        std::cout << a << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
