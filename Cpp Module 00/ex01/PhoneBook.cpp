/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:29:49 by matef             #+#    #+#             */
/*   Updated: 2022/10/12 01:29:50 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::running(void)
{
    str choise;
    str firstName;
    str lastName;
    str nickName;
    str searchIndex;
    str phone;
    str secret;
    int index;
    int firstLoop;

    index = 0;
    firstLoop = 1;
    this->setLastIndex(-1);
    while(1)
    {
        std::cout << "ENTRE YOUR CHOISE : ADD : SEARCH : EXIT" << std::endl;
        std::getline (std::cin, choise);
        if (std::cin.fail() || std::cin.eof())
            break ;
        if (choise == "ADD")
        {
            std::cout << "ENTRE FIRST NAME" << std::endl;
            std::getline (std::cin, firstName);
            if (firstName.empty())
                continue;
            std::cout << "ENTRE LAST NAME\n";
            std::getline (std::cin, lastName);
            if (lastName.empty())
                continue;
            std::cout << "ENTRE NICK NAME\n";
            std::getline (std::cin, nickName);
            if (nickName.empty())
                continue;
            std::cout << "ENTRE PHONE\n";
            std::getline (std::cin, phone);
            if (phone.empty())
                continue;
            std::cout << "ENTRE SECRET\n";
            std::getline (std::cin, secret);
            if (secret.empty())
                continue;
            this->addContact(index, firstName, lastName, nickName, phone, secret);
            index++;
            if (firstLoop && this->getLastIndex() < 8)
                this->setLastIndex(index - 1);
            if (index == 8)
            {
                firstLoop = 0;
                index = 0;
            }
        }
        else if (choise == "SEARCH")
            this->search();
        else if (choise == "EXIT")
            break;
    }
}

void PhoneBook::addContact(int index, str firstName,\
                str lastName, str nickName, str phone, str secret)
{
    this->book[index].setIndex(index);
    this->book[index].setFirstName(firstName);
    this->book[index].setLastName(lastName);
    this->book[index].setNickName(nickName);
    this->book[index].setPhone(phone);
    this->book[index].setSecret(secret);
}

void PhoneBook::search(void)
{
    str index;
    int i;

    std::cout << "INDEX      | FIRST NAME | LAST NAME  | NICKNAME"<< std::endl;
    for(int i = 0; i < this->getLastIndex() + 1; i++)
    {
        std::cout << this->checkLenght(std::to_string(this->getContact(i).getIndex())) << " | " << this->checkLenght(this->getContact(i).getFirstName()) << " | ";
        std::cout << this->checkLenght(this->getContact(i).getLastName()) << " | " << this->checkLenght(this->getContact(i).getNickName()) << std::endl;
    }
    std::cout << "ENTRE CONTACT INDEX FOR MORE DEATILS" << std::endl;
    std::getline(std::cin, index);
    if (std::cin.fail() || std::cin.eof())
        return ;
    if (!index.empty())
    {
        if (isString(index))
        {
            i = stoi(index);
            if (this->getLastIndex() == -1)
            {
                std::cout << "NO CONTACT ADDED" << std::endl;
                return ;
            }
            else if (i > this->getLastIndex())
            {
                std::cout << "INDEX NOT VALID" << std::endl;
                return ;
            }
            std::cout << this->getLastIndex() << std::endl;
            std::cout << "INDEX : " << this->getContact(i).getIndex() << std::endl;
            std::cout << "FIRST NAME : " << this->getContact(i).getFirstName() << std::endl;
            std::cout << "LAST NAME : " << this->getContact(i).getLastName() << std::endl;
            std::cout << "NICK NAME : " << this->getContact(i).getNickName() << std::endl;
            std::cout << "PHONE NUMBER : " << this->getContact(i).getPhone() << std::endl;
            std::cout << "DARKEST SECRET : " << this->getContact(i).getSecret() << std::endl;
        }
        else
            std::cout << "INDEX NOT VALID" << std::endl;
    }
}

Contact PhoneBook::getContact(int index)
{
    return this->book[index];
}

int     PhoneBook::getLastIndex(void)
{
    return this->lastIndex;
}

void     PhoneBook::setLastIndex(int lastIndex)
{
    this->lastIndex = lastIndex;
}

std::string    PhoneBook::checkLenght(std::string strg)
{
    str tmp;

    if (strg.length() > 10)
    {
        tmp = strg.substr(0, 10);
        tmp[9] = '.';
        return tmp;
    }
    while (strg.length() < 10)
        strg += " ";
    return strg;
}

int PhoneBook::isString(str index)
{ 
	for(int i = 0; i < index.length(); i++) 
		if(index[i] < '0' || index[i] > '9')  
			return 0; 
	return 1; 
}

