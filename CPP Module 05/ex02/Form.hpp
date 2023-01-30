/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:49 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:07:47 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class Bureaucrat;
#include <iostream>
#include <exception>

class Form
{
    private:
        const   std::string name;
        const int gradeToSigned;
        const int gradeToExecute;
        bool formSigned;

    public:
        void execute(Bureaucrat & executor) const;
        Form(std::string name = "", int gradeToSigned = 1, int gradeToExecute = 1);
        virtual ~Form();

        std::string getName() const;
        int getGradeToSigned() const;
        int getGradeToExecute() const;

        bool getFormSigned() const;
        void setFormSigned(bool fromSigned);

        bool getFormExucuted() const;
        void setFormExucuted(bool fromExucuted);

        void beSigned(Bureaucrat &obj);

        virtual void action() const = 0;

        class CustomException : public std::exception
        {
            private:
                const char *message;
            public:
                CustomException(const char *message);
                const char *what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Form const &obj);
