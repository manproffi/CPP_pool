/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 23:38:21 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 23:38:23 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon()
{
	setName("PlasmaRifle");
	setAPCost(5);
	setDamage(21);
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & a) : AWeapon(a.getName(), a.getDamage(), a.getAPCost())
{}


PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	std::cout << "This is PlasmaRifle constructor" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


PlasmaRifle& PlasmaRifle::operator= (PlasmaRifle const & a)
{	
	setName(a.getName());
	setDamage(a.getDamage());
	setAPCost(a.getAPCost());
	return *this;
}
