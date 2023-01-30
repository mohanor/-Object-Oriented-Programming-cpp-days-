/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:35 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 19:21:07 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator= (const PresidentialPardonForm &obj);
        
        std::string getTarget() const;
        ~PresidentialPardonForm();
        void action() const;
};
