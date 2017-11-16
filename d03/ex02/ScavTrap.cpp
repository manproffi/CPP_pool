/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:27:36 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 19:27:39 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
	std::cout << "Default constructor ScavTrap::ScavTrap() (without name)" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << "Default constructor ScavTrap::ScavTrap() (with name)" << std::endl;
	energy_point = 50;
	max_energy_point = 50;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
}
ScavTrap::~ScavTrap()
{
	std::cout << " ++++ Default destructor ScavTrap::~ScavTrap()" << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	std::string commandAttack[5];
	commandAttack[0] = "Of course I should clean my windows. But privacy is important too.";
	commandAttack[1] = "Broccoli: Hey, I look like a tree.";
	commandAttack[2] = "Mushroom: Wow, I look just like an umbrella.";
	commandAttack[3] = "Walnut: I look exactly like a brain.";
	commandAttack[4] = "Banana: Man, can we change the topic please?";
	std::cout << commandAttack[std::rand() % 5] << std::endl;
}

