/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 23:38:49 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 23:38:50 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon()
{
	setName("PowerFist");
	setAPCost(8);
	setDamage(50);
}


PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	std::cout << "This is PowerFist constructor" << std::endl;
}

PowerFist::~PowerFist()
{}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const& a)
{
	setName(a.getName());
	setDamage(a.getDamage());
	setAPCost(a.getAPCost());
	return *this;
}

void 		PowerFist::takeDamage(int dam)
{
	attack();
	(void)dam;
}
