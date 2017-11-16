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

    Bureaucrat& operator++ ();
    Bureaucrat operator++ (int);
    Bureaucrat& operator-- ();
    Bureaucrat operator-- (int);

    void                    increment();
    void                    decrement();
};

std::ostream & operator << (std::ostream & o, Bureaucrat const & a);


#endif
