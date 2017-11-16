/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:22:17 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/07 16:22:19 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCast.hpp"

int     main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;

    ClassCast   myClass;

    int i1 = std::atoi(argv[1]);

    myClass.castChar(argv[1], i1);
    myClass.castInt(argv[1]);
    myClass.castFloat(argv[1], i1);
    myClass.castDouble(argv[1], i1);


    return 0;
}


