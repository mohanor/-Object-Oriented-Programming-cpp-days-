/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:26 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:28:47 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern intern;
        Form *shrubbery;
        Form *presidential;
        Form *robotomy;
        Form *none;
        
        shrubbery = intern.makeForm("ShrubberyCreationForm", "shrubbery");
        robotomy = intern.makeForm("RobotomyRequestForm", "robotomy");
        presidential = intern.makeForm("PresidentialPardonForm", "presidential");
        none = intern.makeForm("robotomy request", "Bender");
       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
