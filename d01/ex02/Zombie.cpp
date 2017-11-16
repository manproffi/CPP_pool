/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:04:10 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 13:04:12 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{}

void	Zombie::announce()const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> is died" << std::endl;
}