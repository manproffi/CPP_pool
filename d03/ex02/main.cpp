/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:32:26 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 12:32:28 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int		main(void)
{
	srand(time(0));
	ScavTrap b("ScavTrap");
	FragTrap c("FragTrap");
	
	std::cout << "=========== ScavTrap ===========" << std::endl;
	std::cout << b.get_name() << std::endl;
	std::cout << b.get_hit_point() << std::endl;
	std::cout << b.get_max_hit_point() << std::endl;
	std::cout << b.get_energy_point() << std::endl;
	std::cout << b.get_max_energy_point() << std::endl;
	std::cout << b.get_level() << std::endl;
	std::cout << b.get_melee_attack_damage() << std::endl;
	std::cout << b.get_ranged_attack_damage() << std::endl;
	std::cout << b.get_armor_damage_reduction() << std::endl;
	std::cout << "\n=========== rangedAttack --- <ScavTrap> attacks <FragTrap> ===========" << std::endl;
	b.rangedAttack("FragTrap");
	c.takeDamage(b.get_ranged_attack_damage());
	std::cout << "\n=========== meleeAttack --- <ScavTrap> attacks <FragTrap> ===========" << std::endl;
	b.meleeAttack("FragTrap");
	c.takeDamage(b.get_melee_attack_damage());
	c.beRepaired(40);
	std::cout << "\n=========== challengeNewcomer() ===========" << std::endl;
	b.challengeNewcomer();
	b.challengeNewcomer();
	b.challengeNewcomer();
	b.challengeNewcomer();
	b.challengeNewcomer();
	std::cout << "=========== FragTrap ===========" << std::endl;
	std::cout << c.get_name() << std::endl;
	std::cout << c.get_hit_point() << std::endl;
	std::cout << c.get_max_hit_point() << std::endl;
	std::cout << c.get_energy_point() << std::endl;
	std::cout << c.get_max_energy_point() << std::endl;
	std::cout << c.get_level() << std::endl;
	std::cout << c.get_melee_attack_damage() << std::endl;
	std::cout << c.get_ranged_attack_damage() << std::endl;
	std::cout << c.get_armor_damage_reduction() << std::endl;
	std::cout << "\n=========== rangedAttack --- <FragTrap> attacks <ScavTrap> ===========" << std::endl;
	c.rangedAttack("ScavTrap");
	b.takeDamage(c.get_ranged_attack_damage());
	std::cout << "\n=========== meleeAttack --- <FragTrap> attacks <ScavTrap> ===========" << std::endl;
	c.meleeAttack("ScavTrap");
	b.takeDamage(c.get_melee_attack_damage());
	b.beRepaired(50);
	std::cout << "\n=========== vaulthunter_dot_exe() ===========" << std::endl;
	c.vaulthunter_dot_exe("Bob");
	c.vaulthunter_dot_exe("Bob");
	c.vaulthunter_dot_exe("Bob");
	c.vaulthunter_dot_exe("Bob");
	c.vaulthunter_dot_exe("Bob");

	return 0;
}