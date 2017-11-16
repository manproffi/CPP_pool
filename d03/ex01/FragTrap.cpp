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

FragTrap::FragTrap()
{
	std::cout << "Default constructor called (without name)" << std::endl;
	this->hit_point = 0;
	this->max_hit_point = 0;
	this->energy_point = 0;
	this->max_energy_point = 0;
	this->level = 0;
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
	this->name = "";
}

FragTrap::FragTrap(std::string name): name(name)
{
	std::cout << "Default constructor called (with name)" << std::endl;
	this->hit_point = 100;
	this->max_hit_point = 100;
	this->energy_point = 100;
	this->max_energy_point = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << "> at range, causing <" << this->ranged_attack_damage <<"> points of damage !" << std::endl;

}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << "> at melee, causing <" << this->melee_attack_damage <<"> points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage" << std::endl;
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

void FragTrap::beRepaired(unsigned int amount)
{
	if ((max_hit_point - hit_point) < amount)
	{
		std::cout << "FR4G-TP <" << this->name << "> Hit repaired by "<< (max_hit_point - hit_point) << std::endl;
		hit_point = max_hit_point;
	}
	else
	{
		std::cout << "FR4G-TP <" << this->name << "> Hit repaired by "<< amount << std::endl;
		hit_point += amount;
	}
	if ((max_energy_point - energy_point) < amount)
	{
		std::cout << "FR4G-TP <" << this->name << "> Energy repaired by "<< (max_energy_point - energy_point) << std::endl;
		energy_point = max_energy_point;
	}
	else
	{
		std::cout << "FR4G-TP <" << this->name << "> Energy repaired by "<< amount << std::endl;
		energy_point += amount;
	}
}

	/******************** SET ***************************/

void	FragTrap::set_hit_point(unsigned int value)                 { hit_point = value;}
void	FragTrap::set_max_hit_point(unsigned int value)             { max_hit_point = value;}
void	FragTrap::set_energy_point(unsigned int value)              { energy_point = value;}
void	FragTrap::set_max_energy_point(unsigned int value)          { max_energy_point = value;}
void	FragTrap::set_level(unsigned int value)                     { level = value;}
void	FragTrap::set_melee_attack_damage(unsigned int value)       { melee_attack_damage = value;}
void	FragTrap::set_ranged_attack_damage(unsigned int value)      { ranged_attack_damage = value;}
void	FragTrap::set_armor_damage_reduction(unsigned int value)    { armor_damage_reduction = value;}

	/******************** GET ***************************/
unsigned int	FragTrap::get_hit_point() const                     { return hit_point; }
unsigned int	FragTrap::get_max_hit_point() const                 { return max_hit_point; }
unsigned int	FragTrap::get_energy_point() const                  { return energy_point; }
unsigned int	FragTrap::get_max_energy_point() const              { return max_energy_point; }
unsigned int	FragTrap::get_level() const                         { return level; }
unsigned int	FragTrap::get_melee_attack_damage() const           { return melee_attack_damage; }
unsigned int	FragTrap::get_ranged_attack_damage() const          { return ranged_attack_damage; }
unsigned int	FragTrap::get_armor_damage_reduction() const        { return armor_damage_reduction; }

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






