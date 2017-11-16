/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 00:47:20 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 00:47:22 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
	
SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type)
{}

void 		SuperMutant::takeDamage(int dam)
{
	dam = dam - 3;
	std::cout << "SuperMutant::takeDamage" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & a) : Enemy(a.getHP() , a.getType())
{}

SuperMutant& SuperMutant::operator= (SuperMutant const & a)
{
	setType(a.getType());
	setHP(a.getHP());
	return *this;
}


