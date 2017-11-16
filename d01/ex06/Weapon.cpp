/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:43:47 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 21:43:49 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str): type(str)
{}

const std::string& 	Weapon::getType()
{
	std::string const &ref = type;
	return ref;
}

void				Weapon::setType(std::string str)
{
	type = str;
}