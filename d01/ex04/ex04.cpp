/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:58:12 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 20:02:25 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << "*strPtr: " << *strPtr << std::endl;
	std::cout << "&strRef: " << strRef << std::endl;
	return 0;
}

