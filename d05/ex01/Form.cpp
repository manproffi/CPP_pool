/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:24:02 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 15:24:06 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : levelSing(1), levelExecute(1)
{}

Form::~Form()
{}

Form::Form(std::string name, int levSing, int levExec) : name(name), indicate(false), levelSing(levSing), levelExecute(levExec)
{
    if (levelSing < 1 || levelExecute < 1)
        throw GradeTooHighException();
    else if (levelSing > 150 || levelExecute > 150)
        throw GradeTooLowException();
}

Form::Form(Form const & a) : name(a.getName()), indicate(a.getIndicate()), levelSing(a.getLevelSign()), levelExecute(a.getLevelExecute())
{
    if (levelSing < 1 || levelExecute < 1)
        throw GradeTooHighException();
    else if (levelSing > 150 || levelExecute > 150)
        throw GradeTooLowException();
}

Form& Form::operator= (Form const & a)
{
    indicate = a.getIndicate();
    return *this;
}

std::string         Form::getName()const { return name; }
bool                Form::getIndicate()const { return indicate; }
int                 Form::getLevelSign()const { return levelSing; }
int                 Form::getLevelExecute()const { return levelExecute; }


std::ostream& operator << (std::ostream & o, Form const & ref)
{
    return o << "name: " << ref.getName() << " flag: " <<ref.getIndicate() << " levelSing: "
    << ref.getLevelSign() << " levelExecute: " << ref.getLevelExecute();
}

void                Form::beSigned(Bureaucrat & ref)
{
    if (ref.getGrade() > getLevelSign())
        throw GradeTooLowException();
    indicate = true;
    ref.signForm(*this);
}

void                Form::setIndicate(bool a)
{
    indicate = a;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("\e[31;1m The levelSing or levelExecute gets too high, max level 1 \e[0m");  
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("\e[31;1m The levelSing or levelExecute is too low or the Вig boss is not that big anymore \e[0m");  
}


