/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 01:06:40 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 01:06:41 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	ap = 40;
	aWeapon = NULL;
}

Character::Character(std::string const & name) {
	this->name = name;
	ap = 40;
	aWeapon = NULL;
}

Character::Character(Character const & a) {
	name = a.getName();
}
Character::~Character()
{}

void 			Character::recoverAP() {
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void 			Character::equip(AWeapon* a) {
	aWeapon = a;
}

void			Character::setName(std::string name) {
	this->name = name;
}
void			Character::setAP(int ap) {
	this->ap = ap;
}

std::string 		Character::getName() const {
	return name;
}
int					Character::getAP() const {
	return ap;
}


Character& Character::operator= (Character const & a)
{
	name = a.getName();
	ap = a.getAP();
	return *this;
}

AWeapon*			Character::getaWepon() const
{
	return aWeapon;
}

std::ostream& operator << (std::ostream& ss,  Character const & ref)
{
	// std::cout << "DEBAG!!!" << std::endl;
	// AWeapon *a = ref.getaWepon();
	
	if (ref.getaWepon() != NULL)
		ss << ref.getName() << " has " << ref.getAP() << " AP and wields a " << ref.getaWepon()->getName() << std::endl; 
	else
		ss << ref.getName() << " has " << ref.getAP() << " AP and is unarmed" << std::endl; 
	
	// 	ss << ref.getName() << " has " << ref.getAP() << " AP and wields a " << ref.getaWepon() << std::endl; 
	// else
	// 	ss << ref.getName() << " has " << ref.getAP() << " AP and unarmed" << std::endl; 
	return ss;
}	

void 				Character::attack(Enemy* a)
{

	std::cout << getName() << " attacks " << a->getType() << " with a " << getaWepon()->getName() << std::endl;
	if (getaWepon() != NULL)
	{
		getaWepon()->attack();
		setAP(getAP() - getaWepon()->getAPCost());
		a->setHP(a->getHP() - getaWepon()->getDamage());
		if (a->getHP() <= 0)
			delete a;
		//std::cout << a->getHP() << std::endl;
		// std::cout << a->getHP() << std::endl;
	}
	else
		;
}


