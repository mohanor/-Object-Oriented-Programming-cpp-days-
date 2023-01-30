/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:43:32 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 01:58:37 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *zh =  zombieHorde(N, "zombie");

    if (zh == NULL) return 1;
    for (int i = 0; i < N; i++)
        zh[i].announce();
    
    delete[] zh;
    return 0;
}