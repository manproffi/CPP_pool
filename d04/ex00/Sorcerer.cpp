/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:52:57 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:53:00 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name, std::string title) {
	
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born !" << std::endl;

}

Sorcerer::Sorcerer(Sorcerer& a)
{
	name = a.name;
	title = a.title;
	std::cout << name << ", " << title << ", is born !" << std::endl;
}


Sorcerer::~Sorcerer() {
	
	std::cout << name << ", " << title << ", is dead. " << "Consequences will never be the same !" << std::endl;

}

std::string		Sorcerer::getName()const  { return name; }
std::string		Sorcerer::getTitle()const { return title; }

std::ostream& 	operator << (std::ostream& ss, Sorcerer const & ref) {
	return ss << "I am " << ref.getName() << ", " << ref.getTitle() << ", and I like ponies !" << std::endl;
}

void			Sorcerer::polymorph(Victim const & ref) const {	ref.getPolymorphed(); }
void			Sorcerer::polymorph(Peon const & ref) const { ref.getPolymorphed(); }


Sorcerer& Sorcerer::operator= (Sorcerer const & a)
{
	this->name = a.getName();
	this->title = a.getTitle();
	return *this;
}

void		Sorcerer::setName(std::string name)
{
	this->name = name;
}
void		Sorcerer::setTitle(std::string title)
{
	this->title = title;
}
