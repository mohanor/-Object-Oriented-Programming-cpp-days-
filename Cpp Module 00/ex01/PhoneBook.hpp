/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:29:52 by matef             #+#    #+#             */
/*   Updated: 2022/10/12 01:29:53 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact book[8];
        int     lastIndex;

    public:
        Contact         getContact(int index);
        str             checkLenght(str strg);
        void            running(void);
        void            addContact(int index, str firstName,\
                            str lastName, str nickName, str phone, str secret);
        void            search();
        void            setLastIndex(int lastIndex);
        int             getLastIndex(void);
        int             isString(str index);
};

#endif