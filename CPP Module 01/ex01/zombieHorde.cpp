/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:28:55 by matef             #+#    #+#             */
/*   Updated: 2022/10/28 22:23:26 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, str name)
{
    if (N <= 0) return NULL;
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return zombies;
}
