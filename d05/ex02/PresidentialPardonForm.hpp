/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:28:55 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 22:28:56 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"


class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();

    explicit PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & ref);
    PresidentialPardonForm& operator= (PresidentialPardonForm const & ref);
    ~PresidentialPardonForm();

    void    execute(Bureaucrat const & executor) const;

};

#endif