/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:46:22 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 12:46:23 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int		main()
{
	try 
	{
		Array<int> array0;
		Array<int> array1(5);
	
		
		array1[0] = 10;
		array1[1] = 20;
		array1[2] = 30;
		array1[3] = 40;
		array1[4] = 50;
	
	
		std::cout << "size: " << array1.size() << std::endl;	
	
		for (int i = 0; i < 5; i++)
		{
			std::cout << "arrayInt[" << i << "] = " << array1[i] << std::endl; 
		}

		Array<std::string> array2(2);
		
		array2[0] = "yoyoyoy";
		array2[1] = "hahahaha";

		
		std::cout << "arrayString[0] = " << (std::string)array2[0] << std::endl; 
		std::cout << "arrayString[1] = " << (std::string)array2[1] << std::endl; 

		
		std::cout << "arrayString[3] = " << (std::string)array2[3] << std::endl; 



	}
	catch (std::exception)
	{
		std::cout << "(exception) Error, index for array" << std::endl;
	}
	


	return 0;
}


