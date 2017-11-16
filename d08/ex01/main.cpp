/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:54:19 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 19:54:20 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"



int         main()
{
    try {
        srand(time(0));
        Span sp = Span(100000);

//        sp.addNumber(5);
//        sp.addNumber(3);
//        sp.addNumber(17);
//        sp.addNumber(10);
//        sp.addNumber(11);

        for (int i = 0; i < 100000; i++)
            sp.addNumber(std::rand() % 247483647);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception)
    {
        std::cout << "Error" << std::endl;
    }

    return 0;
}

