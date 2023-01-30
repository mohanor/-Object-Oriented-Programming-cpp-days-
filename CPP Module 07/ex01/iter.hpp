/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:12:53 by matef             #+#    #+#             */
/*   Updated: 2022/11/13 17:44:32 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

template <typename T>
void iter(T *array, size_t lenght, void (*f)(const T &item))
{
    for(size_t i = 0; i < lenght; i++)
        f(array[i]);
}

template <typename T>
void print(T item)
{
    std::cout << item << std::endl;
}

#endif