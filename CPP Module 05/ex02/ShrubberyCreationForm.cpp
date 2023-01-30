/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:44 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:59:03 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <unistd.h>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::action() const
{
    std::ofstream outfile (target + "_shrubbery");
    
    if (outfile.is_open())
    {
        outfile <<  "    oxoxoo    ooxoo\n"
                    "  ooxoxo oo  oxoxooo\n"
                    " oooo xxoxoo ooo ooox\n"
                    " oxo o oxoxo  xoxxoxo\n"
                    "  oxo xooxoooo o ooo\n"
                    "    ooo\\oo\\  /o/o\n"
                    "        \\  \\/ /\n"
                    "         |   /\n"
                    "         |  |\n"
                    "         | D|\n"
                    "         |  |\n"
                    "         |  |\n"
                    "  ______/____\\____";
        outfile.close();
    }
    else
    {
        std::string msg = this->getName() + " couldn't open file " + target + "_shrubbery";
        throw Form::CustomException(&msg[0]);
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
   *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
    if (this != &obj)
        this->target = obj.getTarget();
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}
