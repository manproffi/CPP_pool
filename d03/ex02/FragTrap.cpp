/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:32:06 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 12:32:08 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap::ClapTrap()
{
	std::cout << "Default constructor FragTrap::FragTrap() (without name)" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << "Default constructor FragTrap::FragTrap() (with name)" << std::endl;

	energy_point = 100;
	max_energy_point = 100;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << " ==== Default destructor FragTrap::~FragTrap()" << std::endl;
}

void 	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (energy_point >= 25)
	{
		energy_point -= 25;
		std::string commandAttack[5];
		commandAttack[0] = target + ", I'm gonna kick your fat ass";
		commandAttack[1] = target + ", you'll be screaming - mom, This rock for you";
		commandAttack[2] = target + ", сatch My pendal, I'm attacking you";
		commandAttack[3] = target + ", in the mouth your feet";
		commandAttack[4] = target + ", catch my crazy frog";
		std::cout << commandAttack[std::rand() % 5] << std::endl;
	}
	else
		std::cout << "Not enough energy point" << std::endl;
}






