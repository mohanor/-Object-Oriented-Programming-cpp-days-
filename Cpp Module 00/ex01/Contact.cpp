/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:29:29 by matef             #+#    #+#             */
/*   Updated: 2022/10/12 01:29:30 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setIndex(int index)
{
    this->index = index;
}

int Contact::getIndex(void)
{
    return this->index;
}

void Contact::setFirstName(str firstName)
{
    this->firstName = firstName;
}

str Contact::getFirstName(void)
{
    return this->firstName;
}

void Contact::setLastName(str lastName)
{
    this->lastName = lastName;
}

str Contact::getLastName(void)
{
    return this->lastName;
}

void Contact::setNickName(str nickName)
{
    this->nickName = nickName;
}

str Contact::getNickName(void)
{
    return this->nickName;
}

void        Contact::setPhone(str phone)
{
    this->phone = phone;
}

void        Contact::setSecret(str secret)
{
    this->secret = secret;
}

str Contact::getPhone(void)
{
    return this->phone;
}

str Contact::getSecret(void)
{
    return this->secret;
}