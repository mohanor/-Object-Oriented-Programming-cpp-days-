/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:31 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 19:23:54 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  Form("Presidential", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
    if (this != &obj)
        this->target = obj.getTarget();
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
} 