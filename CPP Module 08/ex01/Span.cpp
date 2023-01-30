/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:53:56 by matef             #+#    #+#             */
/*   Updated: 2022/11/15 21:40:59 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Span.hpp"


Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span& obj)
{
    *this = obj;
}

Span &Span::operator= (const Span &obj)
{
    if (this != &obj)
    {
        this->N = obj.getN();
        this->span = obj.getSpan();
    }
    return *this;
}

void Span::addNumber(int nbr)
{
    if (this->span.size() < N)
        span.push_back(nbr);
    else
        throw std::out_of_range("the span is full");
}


int Span::shortestSpan(void) const
{

    if (this->N < 2)
        throw std::out_of_range("can't get shortestSpan (size < 2) !!!");

    std::vector<int> copy = this->getSpan();
    std::vector<int>::iterator iter;

    sort(copy.begin(), copy.end());

    iter = copy.begin();
    int min = abs(*(iter + 1) - *iter);
    int value;
    for(iter = copy.begin(); iter < copy.end() - 1; iter++)
    {
        value = abs(*(iter + 1) - *iter);
        if (value < min)
            min = value;
    }
    
    return min;
}

unsigned int Span::getN() const
{
    return this->N;
}

std::vector <int> Span::getSpan() const
{
    return this->span;
}

int Span::longestSpan(void) const
{
    if (this->N < 2)
        throw std::out_of_range("can't get longestSpan (size < 2) !!!");
    
    std::vector<int> copy = this->getSpan();
    sort(copy.begin(), copy.end());

    return abs(*(copy.end() - 1) - *copy.begin());
}


Span::~Span()
{
}
