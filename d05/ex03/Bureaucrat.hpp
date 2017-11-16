/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 11:12:55 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 11:13:13 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class  Bureaucrat
{
private:
    std::string const       _name;
    int                     _grade;
    Bureaucrat();
public:
    class GradeTooHighException: public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
    public:
        const char* what() const throw();
    };
    
    Bureaucrat(Bureaucrat & a);
    Bureaucrat(std::string name, int grade);
    Bureaucrat & operator = (Bureaucrat const & a);

    std::string const       getName() const;
    int                     getGrade() const;

    ~Bureaucrat();

    void                    increment();
    void                    decrement();

    Bureaucrat& operator++ ();
    Bureaucrat operator++ (int);
    Bureaucrat& operator-- ();
    Bureaucrat operator-- (int);


    bool        signForm(const Form & ref) const;
    void        executeForm(Form const & form);
};

std::ostream & operator << (std::ostream & o, Bureaucrat const & a);


#endif
