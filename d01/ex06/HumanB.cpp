/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:44:52 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 21:44:54 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon; 
}

void	HumanB::attack()const
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}