/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:29:33 by matef             #+#    #+#             */
/*   Updated: 2022/10/12 01:29:34 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   CONTACT_HPP
#define CONTACT_HPP

#include <iostream> 

#define str std::string

class Contact
{
    private:
        int         index;
        str firstName;
        str lastName;
        str nickName;
        str phone;
        str secret;

    public:
        int         getIndex(void);
        void        setIndex(int index);
        void        setFirstName(str firstName);
        void        setLastName(str lastName);
        void        setNickName(str nickName);
        void        setPhone(str phone);
        void        setSecret(str secret);
        str         getLastName(void);
        str         getFirstName(void);
        str         getNickName(void);
        str getPhone(void);
        str getSecret(void);
};

#endif