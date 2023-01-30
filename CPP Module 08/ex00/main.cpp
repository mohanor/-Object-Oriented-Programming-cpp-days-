/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:30:55 by matef             #+#    #+#             */
/*   Updated: 2022/11/15 21:42:43 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"





int main()
{

    {
        std::vector<int> v;
        std::vector<int>::iterator iter;

        int n = 5;
        for(int i = 0; i < n; i++)
            v.push_back(i * 5);
        try
        {
            std::cout << easyfind(v, 1) << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

    }
    
    {
        std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
        
        try
        {
            std::cout << easyfind(ar, 2) << '\n';   
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    {
        std::list<int> gqlist;
  
        for (int i = 0; i < 10; ++i)
            gqlist.push_back(i * 2);
        
        try
        {
            std::cout << easyfind(gqlist, 4) << '\n';   
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}