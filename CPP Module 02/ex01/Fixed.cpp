/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:03:35 by matef             #+#    #+#             */
/*   Updated: 2022/11/01 17:23:25 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->rawBits = 0;
}

Fixed::Fixed(Fixed const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator= (Fixed const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->rawBits = obj.rawBits;
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const rawBits)
{
    this->rawBits = rawBits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<  std::endl;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->rawBits = nbr << this->bits;
}

Fixed::Fixed(const float flt)
{
    std::cout << "Float constructor called" << std::endl;
    this->rawBits = roundf(flt * (1 << this->bits));
}

float Fixed::toFloat( void ) const
{
    return (float)this->rawBits / (1 << this->bits);
}

int Fixed::toInt( void ) const
{
    return (this->rawBits >> this->bits);
}

std::ostream &operator << (std::ostream& os, Fixed const &obj)
{
    os << obj.toFloat();
    return os;
}