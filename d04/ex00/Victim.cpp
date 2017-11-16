/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:53:24 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:53:28 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"


Victim::Victim()
{}

Victim::Victim(std::string name) {
	this->name = name;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &a)
{
	name = a.name;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

std::string		Victim::getName()const  { return name; }


std::ostream& operator << (std::ostream& ss, Victim const & ref) {
	return ss << "I'm " << ref.getName() << " and I like otters !" << std::endl;
}

void			Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}

Victim& 		Victim::operator= (Victim const & a)
{
	this->name = a.getName();
	return *this;
}

void			Victim::setName(std::string name)
{
	this->name = name;
}