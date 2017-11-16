/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:24:11 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 15:24:12 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string           name;
    bool                        indicate;
    const int                   levelSing;
    const int                   levelExecute;
    Form();
public:
    Form(std::string name, int levSing, int levExec);
    Form(Form const & a);
    Form& operator= (Form const & a);
    ~Form();

    std::string         getName()const;
    bool                getIndicate()const;
    int                 getLevelSign()const;
    int                 getLevelExecute()const;
    void                beSigned(Bureaucrat & ref);
    void                setIndicate(bool a);


    class GradeTooLowException: public std::exception
    {
    public:
        const char* what() const throw();
    };
    class GradeTooHighException: public std::exception
    {
    public:
        const char* what() const throw();
    };
};
std::ostream&   operator << (std::ostream & o, Form const & ref);


#endif

