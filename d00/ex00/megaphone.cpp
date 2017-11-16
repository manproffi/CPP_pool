/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:44:21 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/30 11:44:23 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char *argv[])
{
	char 	*str = NULL;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		while (*str)
		{
			if (*str > 96 && *str < 123)
				std::cout << (char)(*str - 32);
			else
				std::cout << *str;
			str++;
		}
	}
	std::cout << "\n";
	return 0;
}
