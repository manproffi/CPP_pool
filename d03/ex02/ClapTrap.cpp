/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:42:18 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 21:42:20 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor ClapTrap::ClapTrap() (without name)" << std::endl;
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

ClapTrap::ClapTrap(std::string name): name(name)
{
	std::cout << "Default constructor ClapTrap::ClapTrap() (with name)" << std::endl;
	hit_point = 100;
	max_hit_point = 100;
	level = 1;

}
ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor ClapTrap::~ClapTrap()" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap <" << this->name << "> attacks <" << target << "> at range, causing <" << this->ranged_attack_damage <<"> points of damage !" << std::endl;

}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap <" << this->name << "> attacks <" << target << "> at melee, causing <" << this->melee_attack_damage <<"> points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage <ClapTrap>" << std::endl;
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

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((max_hit_point - hit_point) < amount)
	{
		std::cout << "ClapTrap <" << this->name << "> Hit repaired by "<< (max_hit_point - hit_point) << std::endl;
		hit_point = max_hit_point;
	}
	else
	{
		std::cout << "ClapTrap <" << this->name << "> Hit repaired by "<< amount << std::endl;
		hit_point += amount;
	}
	if ((max_energy_point - energy_point) < amount)
	{
		std::cout << "ClapTrap <" << this->name << "> Energy repaired by "<< (max_energy_point - energy_point) << std::endl;
		energy_point = max_energy_point;
	}
	else
	{
		std::cout << "ClapTrap <" << this->name << "> Energy repaired by "<< amount << std::endl;
		energy_point += amount;
	}
}

	/******************** SET ***************************/

void	ClapTrap::set_hit_point(unsigned int value)                 { hit_point = value;}
void	ClapTrap::set_max_hit_point(unsigned int value)             { max_hit_point = value;}
void	ClapTrap::set_energy_point(unsigned int value)              { energy_point = value;}
void	ClapTrap::set_max_energy_point(unsigned int value)          { max_energy_point = value;}
void	ClapTrap::set_level(unsigned int value)                     { level = value;}
void	ClapTrap::set_melee_attack_damage(unsigned int value)       { melee_attack_damage = value;}
void	ClapTrap::set_ranged_attack_damage(unsigned int value)      { ranged_attack_damage = value;}
void	ClapTrap::set_armor_damage_reduction(unsigned int value)    { armor_damage_reduction = value;}

	/******************** GET ***************************/
unsigned int	ClapTrap::get_hit_point() const                     { return hit_point; }
unsigned int	ClapTrap::get_max_hit_point() const                 { return max_hit_point; }
unsigned int	ClapTrap::get_energy_point() const                  { return energy_point; }
unsigned int	ClapTrap::get_max_energy_point() const              { return max_energy_point; }
unsigned int	ClapTrap::get_level() const                         { return level; }
unsigned int	ClapTrap::get_melee_attack_damage() const           { return melee_attack_damage; }
unsigned int	ClapTrap::get_ranged_attack_damage() const          { return ranged_attack_damage; }
unsigned int	ClapTrap::get_armor_damage_reduction() const        { return armor_damage_reduction; }
std::string		ClapTrap::get_name() const       					{ return name; }

