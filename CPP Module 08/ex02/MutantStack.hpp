/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:27:30 by matef             #+#    #+#             */
/*   Updated: 2022/11/15 21:29:30 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        
        MutantStack() {}

        ~MutantStack() {}

        MutantStack(const MutantStack &obj)
        {
            *this = obj;
        }

        MutantStack &operator= (const MutantStack &obj)
        {
            if (this != &obj)
                this->c = obj.getC();
            return *this;
        }

        iterator  begin()
        {
            return this->c.begin();
        }

        iterator  end()
        {
            return this->c.end();
        }

        Container getC()
        {
            return this->c;
        }
};





#endif