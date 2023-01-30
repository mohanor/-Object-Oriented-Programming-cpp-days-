/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:29:16 by matef             #+#    #+#             */
/*   Updated: 2022/10/12 01:29:17 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
    if (ac != 1)
    {
        for(int i = 1; i < ac; i++)
            for(int j = 0; av[i][j]; j++)
                std::cout << (char)toupper(av[i][j]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}
