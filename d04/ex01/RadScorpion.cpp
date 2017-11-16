/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 00:58:38 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 00:58:39 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & a) : Enemy(a.getHP(), a.getType())
{

}
	
RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type)
{}

void 		RadScorpion::takeDamage(int dam)
{
	std::cout << "------RadScorpion::takeDamage" << std::endl;
	setHP(getHP() - dam);
	std::cout << "------RadScorpion::takeDamage" << getHP() << std::endl;
}

RadScorpion& RadScorpion::operator= (RadScorpion const & a)
{
	setType(a.getType());
	setHP(a.getHP());
	return *this;
}

