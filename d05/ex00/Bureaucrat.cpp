/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 11:13:17 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 11:13:19 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();

    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat & a): _name(a.getName())
{
    if (a.getGrade() < 1)
        throw GradeTooHighException();
    else if (a.getGrade() > 150)
        throw GradeTooLowException();
    _grade = a.getGrade();
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & a)
{
    _grade = a.getGrade();
    return *this;
}

std::string const       Bureaucrat::getName() const { return _name; }
int                     Bureaucrat::getGrade() const { return _grade; }

Bureaucrat::~Bureaucrat()
{}


std::ostream & operator << (std::ostream & o, Bureaucrat const & a)
{
    return o << "<" << a.getName() << ">, bureaucrat grade <" << a.getGrade() << ">.";
}


Bureaucrat& Bureaucrat::operator++()  
{  
    --_grade;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    return *this;  
}  
  
Bureaucrat Bureaucrat::operator++(int)  
{  
    Bureaucrat temp = *this;  
    ++*this;  
    return temp;  
}

Bureaucrat& Bureaucrat::operator--()  
{  
    ++_grade;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    return *this;  
}  
  
Bureaucrat Bureaucrat::operator--(int)  
{  
    Bureaucrat temp = *this;  
    ++*this;  
    return temp;  
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The grade gets too high, max level 1");  
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The grade gets too low, min level = 150");  
}

void                 Bureaucrat::increment()
{
    ++*this;
}
void                 Bureaucrat::decrement()
{
    --*this;
}



