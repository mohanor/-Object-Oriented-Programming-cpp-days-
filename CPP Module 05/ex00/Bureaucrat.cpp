/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:31 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 14:25:53 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &obj)
{
    if (this != &obj)
        this->_grade = obj._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (name == "")
        throw std::invalid_argument("invalid argument");
    this->_grade = grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::increment()
{
    if (this->_grade == 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrement()
{
    if (this->_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

std::ostream &operator<< (std::ostream& os, Bureaucrat const &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
