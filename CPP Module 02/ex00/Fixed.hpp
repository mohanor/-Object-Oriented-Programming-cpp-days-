/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:03:44 by matef             #+#    #+#             */
/*   Updated: 2022/10/26 22:25:42 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    private:
        int rawBits;
        static const int bits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &obj);
        Fixed &operator= (Fixed const &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};




#endif