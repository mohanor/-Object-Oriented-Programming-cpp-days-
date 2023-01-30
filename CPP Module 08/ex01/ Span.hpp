/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Span.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:53:50 by matef             #+#    #+#             */
/*   Updated: 2022/11/15 21:13:00 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP



#include <exception>

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#include <math.h>

class  Span
{
    private:
        std::vector <int> span;
        unsigned int N;
    
    public:
        Span(unsigned int N = 0);
        Span(const Span& obj);
        Span &operator= (const Span &obj);
        void addNumber(int nbr);

        template<typename Iterator>
        void addNumber(Iterator start , Iterator end)
        {
            size_t dist = std::distance(start, end);
            if (this->span.size() + dist > N)
                throw std::out_of_range("can't add values");
            this->span.insert(this->span.end(), start, end);
        }

        int shortestSpan(void) const;
        int longestSpan(void) const;
        unsigned int getN() const;
        std::vector <int> getSpan() const;
        ~ Span();
};



#endif