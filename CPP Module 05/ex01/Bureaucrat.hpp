/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:28 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:38:44 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int _grade;

    public:
        Bureaucrat(std::string name  = "", int grade = 150);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator= (const Bureaucrat &obj);
        ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;

        void        increment();
        void        decrement();

        void        signForm(Form &obj);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<< (std::ostream& os, Bureaucrat const &obj);
