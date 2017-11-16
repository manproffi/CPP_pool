/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:08:17 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 17:08:18 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <list>
#include <vector>

#include "easyfind.hpp"

int		main()
{
	
	std::cout << "********** SET **********" << std::endl;

	int arrayInt[]= {10, 20, 30, 40, 50, 60};

  	std::set<int> first (arrayInt, arrayInt + 6);

  	try
  	{
  		easyfind(first, 70);
  	}
  	catch (std::exception)
  	{
  		std::cout << "Not found" << std::endl;
  	}
	std::cout << "********** LIST **********" << std::endl;
  	std::list<int>	lst1;
  	lst1.push_back(9);
  	lst1.push_back(8);
  	lst1.push_back(7);
  	lst1.push_back(6);
  	lst1.push_back(5);

  	try
  	{
  		easyfind(lst1, 6);
  	}
  	catch (std::exception)
  	{
  		std::cout << "Not found" << std::endl;
  	}
  	std::cout << "********** VECTOR **********" << std::endl;

  	std::vector<int>	v1;
  	v1.push_back(1234);
  	v1.push_back(2);
  	v1.push_back(12);
  	v1.push_back(32);
  	v1.push_back(64);
  	v1.push_back(88);
  	v1.push_back(1234);
  	try
  	{
  		easyfind(v1, 1234);
  	}
  	catch (std::exception)
  	{
  		std::cout << "Not found" << std::endl;
  	}
  	
	return 0;
}