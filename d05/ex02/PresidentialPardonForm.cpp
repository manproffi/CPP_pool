/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:28:59 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 22:29:01 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
# include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref) : Form(ref)
{}

PresidentialPardonForm& PresidentialPardonForm::operator= (PresidentialPardonForm const & ref)
{
    setIndicate(ref.getIndicate());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

