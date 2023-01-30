/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:03:35 by matef             #+#    #+#             */
/*   Updated: 2022/11/01 17:30:07 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    this->rawBits = 0;
}

Fixed::Fixed(Fixed const &obj)
{
    *this = obj;
}

Fixed &Fixed::operator= (Fixed const &obj)
{
    if (this != &obj)
        this->rawBits = obj.rawBits;
    return *this;
}

int Fixed::getRawBits() const
{
    return this->rawBits;
}

void Fixed::setRawBits(int const rawBits)
{
    this->rawBits = rawBits;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int nbr)
{
    this->rawBits = nbr << this->bits;
}

Fixed::Fixed(const float flt)
{
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

Fixed& Fixed::min(Fixed &objOne, Fixed &objTwo)
{
    if (objOne.getRawBits() < objTwo.getRawBits())
        return objOne;
    return objTwo;
}

const Fixed&  Fixed::min(Fixed const &objOne, Fixed const &objTwo)
{
    if (objOne.getRawBits() < objTwo.getRawBits())
        return objOne;
    return objTwo;
}

Fixed& Fixed::max(Fixed &objOne, Fixed  &objTwo)
{
    if (objOne.getRawBits() > objTwo.getRawBits())
        return objOne;
    return objTwo;
}

const Fixed& Fixed::max(Fixed const &objOne, Fixed const &objTwo)
{
    if (objOne.getRawBits() > objTwo.getRawBits())
        return objOne;
    return objTwo;
}

bool Fixed::operator> (Fixed const &obj)
{
    return (this->rawBits > obj.rawBits);
}

bool Fixed::operator< (Fixed const &obj)
{
    return (this->rawBits < obj.rawBits);
    
}

bool Fixed::operator>= (Fixed const &obj)
{
    return (this->rawBits >= obj.rawBits);
}

bool Fixed::operator<= (Fixed const &obj)
{
    return (this->rawBits <= obj.rawBits);
}

bool Fixed::operator== (Fixed const &obj)
{
    return (this->rawBits == obj.rawBits);
}

bool Fixed::operator!= (Fixed const &obj)
{
    return (this->rawBits != obj.rawBits);
}

Fixed Fixed::operator+ (Fixed const &obj)
{
    Fixed sum;
    sum.rawBits = this->rawBits + obj.rawBits;
    return (sum);
}

Fixed Fixed::operator- (Fixed const &obj)
{
    Fixed mns;
    mns.rawBits = this->rawBits - obj.rawBits;
    return (mns);
}

Fixed Fixed::operator* (Fixed const &obj)
{
    float f = this->toFloat() * obj.toFloat();
    Fixed mul(f);
    return (mul);
}

Fixed Fixed::operator/ (Fixed const &obj)
{
    float f = this->toFloat() / obj.toFloat();
    Fixed div(f);
    return (div);
}

Fixed Fixed::operator++ (int)
{
    Fixed tmp(*this);

    this->rawBits++;
    return tmp;
}

Fixed &Fixed::operator++ ()
{
    this->rawBits++;
    return *this;
}

Fixed Fixed::operator-- (int)
{
    Fixed tmp(*this);

    this->rawBits--;
    return tmp;
}

Fixed &Fixed::operator-- ()
{
    this->rawBits--;
    return *this;
}

std::ostream &operator<< (std::ostream& os, Fixed const &obj)
{
    os << obj.toFloat();
    return os;
}