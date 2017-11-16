/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:44:22 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 21:44:24 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon; 
}

void	HumanA::attack()const
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}