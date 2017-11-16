/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:04:59 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 13:05:01 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void		ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name, this->_type);
	return zombie;
}

Zombie*		ZombieEvent::randomChump()
{
	std::string nameRand[] = {"Juli", "Nelson", "Frederick", "Lulu", "Nick"};
	std::string type[] = {"Easy", "Normal", "Hard", "Harder", "Insane", "Demon"};
	setZombieType(type[std::rand() % 6]);
	Zombie* newZom = newZombie(nameRand[std::rand() % 5]);
	newZom->announce();
	return newZom;
}

ZombieEvent::~ZombieEvent()
{}