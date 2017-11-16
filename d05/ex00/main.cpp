/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 11:13:24 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/06 11:13:25 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int         main()
{
    try
    {
        Bureaucrat      a1("first", 1);
        Bureaucrat      a2("second", 2);
        Bureaucrat      a3 = a1;
        Bureaucrat      a4("four", 4);
       // Bureaucrat      a0("Zero", 0);
        Bureaucrat      a("minNUMBER", 150);
  

        //a1.increment();
      
        std::cout << a1 << std::endl;
        std::cout << a2 << std::endl;
        std::cout << a3 << std::endl;
        std::cout << a4 << std::endl;
        std::cout << a << std::endl;
        

    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}