/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 23:13:28 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 23:13:30 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	name = "";
}
AWeapon::AWeapon(AWeapon const & a)
{
	name = a.getName();
	apcost = a.getAPCost();
	damage = a.getDamage();
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

std::string 		 	AWeapon::getName() const { return name; }
int						AWeapon::getAPCost() const { return apcost; }
int						AWeapon::getDamage() const { return damage; }

void					AWeapon::setName(std::string name) { this->name = name; }
void					AWeapon::setAPCost(int apcost) { this->apcost = apcost; } 
void					AWeapon::setDamage(int damage) { this->damage = damage; }


AWeapon::~AWeapon()
{}

AWeapon& AWeapon::operator= (AWeapon const & a)
{
	name = a.getName();
	apcost = a.getAPCost();
	damage = a.getDamage();
	return *this;
}