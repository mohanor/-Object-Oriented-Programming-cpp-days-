/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:03:44 by matef             #+#    #+#             */
/*   Updated: 2022/10/30 16:04:39 by matef            ###   ########.fr       */
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
        Fixed &operator= (Fixed const &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator<< (std::ostream& os, Fixed const &obj);



#endif