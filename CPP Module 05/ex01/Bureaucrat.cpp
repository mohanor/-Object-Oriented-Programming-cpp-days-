/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:31 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 15:08:38 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstring>

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

Bureaucrat::~Bureaucrat()
{
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

void Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << this->name << " signed " << obj.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
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
