/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:26 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:33:58 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm shrubbery("home");
        PresidentialPardonForm presidential("home");
        RobotomyRequestForm robotomy("home");

        Bureaucrat s = Bureaucrat("ahmed", 1);

        std::cout << "\n";

        shrubbery.beSigned(s);
        presidential.beSigned(s);
        robotomy.beSigned(s);

        s.executeForm(shrubbery);
        s.executeForm(presidential);
        s.executeForm(robotomy);

        std::cout << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
