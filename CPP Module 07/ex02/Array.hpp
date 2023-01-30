/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:47:54 by matef             #+#    #+#             */
/*   Updated: 2022/11/13 18:02:47 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int n;
    public:
        Array()
        {
            this->array = new T[0];
            this->n = 0;
        }
        
        Array(unsigned int n)
        {
            this->array = new T[n];
            this->n = n; 
        }
        
        unsigned int size() const
        {
            return this->n;
        }

        Array(const Array &obj)
        {
            this->n = obj.size();
            T *tmp = new T[obj.size()];
            for(unsigned int i = 0; i < obj.size(); i++)
                tmp[i] = obj.array[i];
            this->array = tmp;
        }

        Array &operator= (const Array &obj)
        {
            if (this != &obj)
            {
                delete this->array;
                this->array =  new T[obj.size()];
                for(unsigned int i = 0; i < obj.size(); i++)
                    this->array[i] = obj.array[i];
            }
            return *this;
        }

        T &operator[] (unsigned int n)
        {
            if (n >= this->n)
                throw std::out_of_range("index is big then size of array");
            return array[n];
        }

        const T& operator[](const unsigned int n) const
        {
            if (n >= this->n)
                throw std::out_of_range("index is big then size of array");
            return array[n];
        }

        ~Array() {}
};


#endif