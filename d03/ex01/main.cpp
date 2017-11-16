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
	FragTrap bot("Bot");
	bot.rangedAttack("Toto");
	bot.meleeAttack("Toto");
	bot.takeDamage(50);
	bot.beRepaired(50);
	bot.takeDamage(100);
	bot.beRepaired(50);
	bot.vaulthunter_dot_exe("Chack");
	bot.vaulthunter_dot_exe("Chack");
	bot.vaulthunter_dot_exe("Chack");
	bot.vaulthunter_dot_exe("Chack");
	ScavTrap toto("Noris");
	toto.rangedAttack("Noris");
	toto.meleeAttack("Noris");
	toto.takeDamage(50);
	toto.beRepaired(50);
	toto.takeDamage(100);
	toto.beRepaired(50);
	toto.challengeNewcomer();
	toto.challengeNewcomer();
	toto.challengeNewcomer();
	toto.challengeNewcomer();

	return 0;
}