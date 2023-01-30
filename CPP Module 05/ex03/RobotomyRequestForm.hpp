/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:41 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 21:01:21 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"


class RobotomyRequestForm : public Form
{
    private:
        std::string target;

    public:
        RobotomyRequestForm();

        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator= (const RobotomyRequestForm &obj);

        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void action() const;
        std::string getTarget() const;
};
