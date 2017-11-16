/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:30:02 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 11:30:09 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, double hight, std::string color, int age): _name(name), _hight(hight), _color(color), _age(age)
{
	std::cout << "Pony " << _name << " is born" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << _name << " is died" << std::endl;
}
