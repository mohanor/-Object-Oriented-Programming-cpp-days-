/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:53:05 by matef             #+#    #+#             */
/*   Updated: 2022/11/15 21:26:17 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Span.hpp"

int main()
{

    try
    {
        Span sp = Span(4);
        std::set<int> v;
        v.insert(6);
        v.insert(3);
        v.insert(17);
        v.insert(19);
        v.insert(11);
        std::map<int, int> mp;
        mp.insert(std::make_pair(1, 2));
        sp.addNumber(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    // try
    // {
    //     Span sps = Span(10000);
    
    //     sps.addNumber(0, 10000);
    //     std::cout << sps.shortestSpan() << std::endl;
    //     std::cout << sps.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    

    return 0;
}