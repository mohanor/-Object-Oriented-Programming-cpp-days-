/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:03:44 by matef             #+#    #+#             */
/*   Updated: 2022/11/01 17:30:16 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int rawBits;
        static const int bits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const int nbr);
        Fixed(const float flt);
        Fixed(Fixed const &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        static Fixed& min(Fixed &objOne, Fixed &objTwo);
        static const Fixed& min(Fixed const &objOne, Fixed const &objTwo);
        static Fixed& max(Fixed &objOne, Fixed  &objTwo);
        static const Fixed& max(Fixed const &objOne, Fixed const &objTwo);

        Fixed &operator= (Fixed const &obj);
        bool operator> (Fixed const &obj);
        bool operator< (Fixed const &obj);
        bool operator>= (Fixed const &obj);
        bool operator<= (Fixed const &obj);
        bool operator== (Fixed const &obj);
        bool operator!= (Fixed const &obj);

        Fixed operator ++ (int);
        Fixed &operator ++ ();
        Fixed operator-- (int);
        Fixed &operator-- ();

        Fixed operator+ (Fixed const &obj);
        Fixed operator- (Fixed const &obj);
        Fixed operator* (Fixed const &obj);
        Fixed operator/ (Fixed const &obj);

};

std::ostream &operator<< (std::ostream& os, Fixed const &obj);

#endif