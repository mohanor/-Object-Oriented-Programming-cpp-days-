/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:49 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 15:37:25 by matef            ###   ########.fr       */
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
        Form(std::string name = "", int gradeToSigned = 0, int gradeToExecute = 150);
        Form(const Form &obj);
        Form &operator= (const Form &obj);
        ~Form();

        std::string getName() const;
        int getGradeToSigned() const;
        int getGradeToExecute() const;

        bool getFormSigned() const;
        void setFormSigned(bool fromSigned);

        int getFormExecute() const;
        void setFormExecute(int formExecute);

        void beSigned(Bureaucrat &obj);

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
