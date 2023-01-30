/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:43 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:17:30 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSigned, int gradeToExecute) : name(name), gradeToSigned(gradeToSigned), gradeToExecute(gradeToExecute)
{
    std::cout << "Form default constructor called" << std::endl;
    if (gradeToSigned < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeToSigned > 150)
        throw Bureaucrat::GradeTooLowException();
    if (name == "")
        throw std::invalid_argument("invalid argument");
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
    return this->name;
}

int Form::getGradeToSigned() const
{
    return this->gradeToSigned;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

bool Form::getFormSigned() const
{
    return this->formSigned;
}

void Form::setFormSigned(bool fromSigned)
{
    this->formSigned = fromSigned;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("GradeTooLowException1");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException2");
}

Form::CustomException::CustomException(const char *message) : message(message) {}

const char *Form::CustomException::what() const throw()
{
    return this->message;
}

void Form::beSigned(Bureaucrat  &obj)
{
    if (obj.getGrade() <= this->getGradeToSigned())
        this->setFormSigned(true);
    else
    {
        this->setFormSigned(false);
        throw Form::GradeTooLowException();
    }
}


void Form::execute(Bureaucrat & executor) const
{
    if (!(executor.getGrade() <= this->gradeToExecute && this->formSigned))
        throw Form::GradeTooLowException();
    action();
}

// void Form::action() const
// {}

std::ostream &operator<< (std::ostream& os, Form const &obj)
{
    std::string sing = "NO";

    if (obj.getFormSigned())
        sing = "YES";
    os << "Form name : " << obj.getName() << "\ngrade to singed : " << obj.getGradeToSigned() << "\ngrade to exucute : " << obj.getGradeToExecute() << "\nSinged : " << sing;
    return os;
}
