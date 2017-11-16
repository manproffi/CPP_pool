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

Zombie::Zombie()
{
	std::string nameRand[] = {"Juli", "Nelson", "Frederick", "Lulu", "Nick", "BonJovi", "ChakNorissDark"};
	this->_name = nameRand[std::rand() % 7];
	std::string typeRand[] = {"Easy", "Normal", "Hard", "Harder", "Insane", "Demon"};
	this->_type = typeRand[std::rand() % 6];
}

void	Zombie::announce()const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> is died" << std::endl;
}