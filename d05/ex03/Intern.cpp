/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:36:19 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/07 13:36:21 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


//class PresidentialPardonForm;
//class RobotomyRequestForm;
//class ShrubberyCreationForm;


Intern::Intern() : age(0)
{};

Intern::~Intern()
{}

Intern::Intern(Intern const & ref)
{
    age = ref.getAge();
}
Intern& Intern::operator= (Intern const & ref)
{
    setAge(ref.getAge());
    return *this;
}

const char* Intern::FormException::what() const throw()
{
    return ("\033[31;1m  Form is not known \033[0m");
}

Form*   Intern::makeForm(std::string nameForm, std::string targetName)
{
    if (nameForm == "presidential pardon")
    {
        std::cout << "Intern creates " << nameForm << std::endl;
        return new PresidentialPardonForm(targetName);
    }
    else if (nameForm == "robotomy request")
    {
        std::cout << "Intern creates " << nameForm << std::endl;
        return new RobotomyRequestForm(targetName);
    }
    else if (nameForm == "shrubbery creation")
    {
        std::cout << "Intern creates " << nameForm << std::endl;
        return new ShrubberyCreationForm(targetName);
    }
    else
        throw FormException();

}

int Intern::getAge() const {
    return age;
}

void Intern::setAge(int age) {
    Intern::age = age;
}




