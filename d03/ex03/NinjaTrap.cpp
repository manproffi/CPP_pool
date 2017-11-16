/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 00:31:05 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 00:31:08 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"



NinjaTrap::NinjaTrap() : ClapTrap::ClapTrap()
{
	std::cout << "Default constructor NinjaTrap::NinjaTrap() (without name)" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << "Default constructor NinjaTrap::NinjaTrap() (with name)" << std::endl;
	hit_point = 60;
	max_hit_point = 60;
	energy_point = 120;
	max_energy_point = 120;
	level = 1;
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
}
NinjaTrap::~NinjaTrap()
{
	std::cout << " ---- Default destructor NinjaTrap::NinjaTrap()" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap & ref)
{
	std::cout << "\n************ NinjaTrap::ninjaShoebox ************" << std::endl;
	meleeAttack(ref.get_name());
	ref.takeDamage(get_melee_attack_damage());
}

void		NinjaTrap::ninjaShoebox(ScavTrap & ref)
{
	std::cout << "\n************ NinjaTrap::ninjaShoebox ************" << std::endl;
	meleeAttack(ref.get_name());
	ref.takeDamage(get_melee_attack_damage());
}

void		NinjaTrap::ninjaShoebox(FragTrap & ref)
{
	std::cout << "\n************ NinjaTrap::ninjaShoebox ************" << std::endl;
	meleeAttack(ref.get_name());
	ref.takeDamage(get_melee_attack_damage());
}

void		NinjaTrap::ninjaShoebox(NinjaTrap & ref)
{
	std::cout << "\n************ this is harakiri ************" << std::endl;
	meleeAttack(ref.get_name());
	ref.takeDamage(get_melee_attack_damage());
}