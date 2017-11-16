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

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor FragTrap::ScavTrap (without name)" << std::endl;
	hit_point = 0;
	max_hit_point = 0;
	energy_point = 0;
	max_energy_point = 0;
	level = 0;
	melee_attack_damage = 0;
	ranged_attack_damage = 0;
	armor_damage_reduction = 0;
	name = "";
}

ScavTrap::ScavTrap(std::string name): name(name)
{
	std::cout << "Default constructor FragTrap::ScavTrap (with name)" << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	energy_point = 50;
	max_energy_point = 50;
	level = 1;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor ScavTrap" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap <" << this->name << "> attacks <" << target << "> at range, causing <" << this->ranged_attack_damage <<"> points of damage !" << std::endl;

}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap <" << this->name << "> attacks <" << target << "> at melee, causing <" << this->melee_attack_damage <<"> points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage <ScavTrap>" << std::endl;
	if (amount < armor_damage_reduction)
		;
	else if ((hit_point + armor_damage_reduction) < amount)
	{
		hit_point = 0;
		std::cout  << name << " is died!!!" << std::endl;
	}
	else
	{
		hit_point = hit_point + armor_damage_reduction - amount;
		std::cout  << name << " has " << hit_point << " hit_points" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if ((max_hit_point - hit_point) < amount)
	{
		std::cout << "ScavTrap <" << this->name << "> Hit repaired by "<< (max_hit_point - hit_point) << std::endl;
		hit_point = max_hit_point;
	}
	else
	{
		std::cout << "ScavTrap <" << this->name << "> Hit repaired by "<< amount << std::endl;
		hit_point += amount;
	}
	if ((max_energy_point - energy_point) < amount)
	{
		std::cout << "ScavTrap <" << this->name << "> Energy repaired by "<< (max_energy_point - energy_point) << std::endl;
		energy_point = max_energy_point;
	}
	else
	{
		std::cout << "ScavTrap <" << this->name << "> Energy repaired by "<< amount << std::endl;
		energy_point += amount;
	}
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

	/******************** SET ***************************/

void	ScavTrap::set_hit_point(unsigned int value)                 { hit_point = value;}
void	ScavTrap::set_max_hit_point(unsigned int value)             { max_hit_point = value;}
void	ScavTrap::set_energy_point(unsigned int value)              { energy_point = value;}
void	ScavTrap::set_max_energy_point(unsigned int value)          { max_energy_point = value;}
void	ScavTrap::set_level(unsigned int value)                     { level = value;}
void	ScavTrap::set_melee_attack_damage(unsigned int value)       { melee_attack_damage = value;}
void	ScavTrap::set_ranged_attack_damage(unsigned int value)      { ranged_attack_damage = value;}
void	ScavTrap::set_armor_damage_reduction(unsigned int value)    { armor_damage_reduction = value;}

	/******************** GET ***************************/
unsigned int	ScavTrap::get_hit_point() const                     { return hit_point; }
unsigned int	ScavTrap::get_max_hit_point() const                 { return max_hit_point; }
unsigned int	ScavTrap::get_energy_point() const                  { return energy_point; }
unsigned int	ScavTrap::get_max_energy_point() const              { return max_energy_point; }
unsigned int	ScavTrap::get_level() const                         { return level; }
unsigned int	ScavTrap::get_melee_attack_damage() const           { return melee_attack_damage; }
unsigned int	ScavTrap::get_ranged_attack_damage() const          { return ranged_attack_damage; }
unsigned int	ScavTrap::get_armor_damage_reduction() const        { return armor_damage_reduction; }

