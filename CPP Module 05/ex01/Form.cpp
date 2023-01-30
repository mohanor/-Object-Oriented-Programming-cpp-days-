/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:43 by matef             #+#    #+#             */
/*   Updated: 2022/11/11 20:37:19 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSigned, int gradeToExecute) : name(name), gradeToSigned(gradeToSigned), gradeToExecute(gradeToExecute)
{
    if (gradeToExecute < 1 || gradeToSigned < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSigned > 150)
        throw Form::GradeTooLowException();
    if (name == "")
        throw std::invalid_argument("invalid argument");
}

Form::Form(const Form &obj) : name(obj.name), gradeToSigned(obj.gradeToSigned), gradeToExecute(obj.gradeToExecute)
{
    *this = obj;
}

Form &Form::operator= (const Form &obj)
{
    if (this != &obj)
        this->formSigned = obj.getFormSigned();
    return *this;
}

Form::~Form()
{
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

Form::CustomException::CustomException(const char *message) : message(message) {}

const char *Form::CustomException::what() const throw()
{
    return this->message;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradeToSigned())
        this->setFormSigned(true);
    else
    {
        std::string h = obj.getName() + " couldn't sign " + this->getName() + " because his Grade Too Low.";
        throw Form::CustomException(&h[0]);
    }
}

std::ostream &operator<< (std::ostream& os, Form const &obj)
{
    std::string sing = "NO";

    if (obj.getFormSigned())
        sing = "YES";
    os << "Form name : " << obj.getName() << "\ngrade to singed : " << obj.getGradeToSigned() << "\ngrade to exucute : " << obj.getGradeToExecute() << "\nSinged : " << sing;
    return os;
}

