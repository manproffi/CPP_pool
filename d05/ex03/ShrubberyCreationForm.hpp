/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:31:13 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 22:31:15 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    
public:
    ShrubberyCreationForm();

    explicit ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & ref);
    ShrubberyCreationForm& operator= (ShrubberyCreationForm const & ref);
    ~ShrubberyCreationForm();

    void    execute(Bureaucrat const & executor) const;
};


#endif
