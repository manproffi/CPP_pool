/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassReplace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:18:35 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 12:18:36 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassReplace.hpp"

ClassReplace::ClassReplace(std::string inputName, std::string outputName)
{
	this->inputName = inputName;
	this->outputName = outputName;
}

void	ClassReplace::replace(std::string s1, std::string s2)
{
	std::string buff;
	std::ifstream input(this->inputName);
	
	if (s1 == "")
	{
		std::cout << "Incorrect input parameter \"\"" << std::endl;
		return ;
	}
	if (!input.is_open())
	{
		std::cout << "File is not available" << std::endl;
		return ;
	}
	std::ofstream output(this->outputName);
	while (getline(input, buff))
	{
		size_t point = buff.find(s1, 0);
		while (point != std::string::npos)
		{
			buff.replace(point, s1.length(), s2);
			point = buff.find(s1, point + s2.length());
		}
		output << buff << std::endl;
	}
	input.close();
	output.close();
}

ClassReplace::~ClassReplace()
{
	std::cout << this->outputName << " file created" << std::endl; 
}