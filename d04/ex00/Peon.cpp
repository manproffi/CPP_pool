/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:53:51 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:53:53 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{}

Peon::Peon(Peon const & a) : Victim(a)
{}

Peon::Peon(std::string name): Victim(name)
{
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}

void 	Peon::getPolymorphed() const {
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}

Peon::~Peon() {	std::cout << "Bleuark..." << std::endl; }

std::string	Peon::getName()const { return name; }

Peon& Peon::operator= (Peon const & a)
{
	name = a.getName();
	return *this;
}