/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:36:14 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/07 13:36:16 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CPP
# define INTERN_CPP
# include <iostream>
//# include "Form.cpp"

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;


class Intern
{
private:
    int age;
public:
    Intern();
    ~Intern();
    Intern(Intern const & ref);
    Intern& operator= (Intern const & ref);

    class FormException: public std::exception
    {
    public:
        const char* what() const throw();
    };

    Form*   makeForm(std::string nameForm, std::string targetName);

    int getAge() const;

    void setAge(int age);
};


#endif