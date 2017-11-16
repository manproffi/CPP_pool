/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 09:29:49 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 09:29:57 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassReplace.hpp"

int		main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "You specified an incorrect amount of data" << std::endl;
		return 1;
	}
	std::string outputName(argv[1]);
	outputName += ".replace";
	ClassReplace replace(argv[1], outputName);
	replace.replace(argv[2], argv[3]);
	return 0;
}
