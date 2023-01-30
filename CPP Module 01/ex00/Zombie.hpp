/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:24:43 by matef             #+#    #+#             */
/*   Updated: 2022/10/14 16:10:12 by matef            ###   ########.fr       */
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
        Zombie(str name);
        ~Zombie();
        void    announce( void );
        str     getName(void);
};

Zombie* newZombie(str name);
void    randomChump( str name );

#endif