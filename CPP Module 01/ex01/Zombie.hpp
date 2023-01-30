/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:28:07 by matef             #+#    #+#             */
/*   Updated: 2022/10/22 22:27:03 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream> 

#define str std::string

class Zombie
{
    private:
        str     name;

    public:
        Zombie(void);
        Zombie(str name);
        ~Zombie();
        void    announce( void );
        str     getName(void);
        void    setName(str name);
};

Zombie* newZombie(str name);
Zombie* zombieHorde( int N, str name);

#endif