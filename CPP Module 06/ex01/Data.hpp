/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:05:37 by matef             #+#    #+#             */
/*   Updated: 2022/11/12 16:36:44 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <cstdint>
#include <iostream>

struct Data
{
    int a;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif