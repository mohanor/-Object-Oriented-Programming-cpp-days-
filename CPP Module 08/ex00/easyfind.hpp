/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:39:36 by matef             #+#    #+#             */
/*   Updated: 2022/11/14 16:49:30 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>

#include<iterator>
#include <vector>
#include<array>
#include <list>


template<typename T>
int easyfind(T const &v, int nbr)
{
    typename T::const_iterator iter;
    iter  = std::find(v.begin(), v.end(), nbr);

    if (iter == v.end())
    {
        std::string err_msg = "the occurrence " + std::to_string(nbr) + " not exsits";
        throw std::out_of_range(err_msg.c_str());
    }
    
    return *iter;
}

#endif