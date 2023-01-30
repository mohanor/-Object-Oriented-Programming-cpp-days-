/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:05:31 by matef             #+#    #+#             */
/*   Updated: 2022/11/12 16:36:49 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *data;
    Data d;

    d.a = 5;
    data = &d;
    Data *ne = deserialize(serialize(data));
    std::cout << ne << std::endl;
    std::cout << ne->a << std::endl;
    
    return 0;
}


