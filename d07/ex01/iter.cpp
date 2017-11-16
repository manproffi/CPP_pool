/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:32:44 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 11:32:46 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename A> 
A	fun_print(A s)
{
	std::cout << s <<  " ";
	return s;
}

template< typename A >
void	iter(A * addres, unsigned int len, A f(A))
{
	for (unsigned int i = 0; i < len; i++)
	{
		f(addres[i]); 
	}
	std::cout << std::endl;
}

int		main()
{
	int array_int[] = {1, 2, 3, 4, 5};
	iter(array_int, sizeof(array_int) / sizeof(array_int[0]), &fun_print);
		
	char row[] = "funny_wokr";
	iter(row, sizeof(row) / sizeof(row[0]), &fun_print);

	float array_float[] = {98, 87, 76, 65, 54, 43, 32, 21, 10};
	iter(array_float, sizeof(array_float) / sizeof(array_float[0]), &fun_print);
	
	std::string array_str[] = {"toto", "lili", "fafa", "topy_topy"};
	iter(array_str, sizeof(array_str) / sizeof(array_str[0]), &fun_print);

	return 0;
}
