/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:05:23 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 13:05:24 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	srand(time(0));
	
	std::cout << "======= class Zombie - Stack ======" <<std::endl;
	Zombie staticZombi("staticZombi", "bot1");
	staticZombi.announce();
	
	std::cout << "\n======= class Zombie - Heap ======" <<std::endl;
	Zombie* dynamicZombie = new Zombie("dynamicZombie", "bot2");
	dynamicZombie->announce();

	std::cout << "\n++++++ class ZombieEvent - randomChump ++++++" <<std::endl;
	ZombieEvent	newZombi;
	Zombie* zombie1	= newZombi.randomChump();
	Zombie* zombie2	= newZombi.randomChump();
	Zombie* zombie3 = newZombi.randomChump();
	
	std::cout << "\n======= ZombieEvent::newZombie ======" <<std::endl;
	ZombieEvent YYY;
	YYY.setZombieType("oldZombie");
	Zombie* zombieNew = YYY.newZombie("NewLife");
	zombieNew->announce();

	std::cout << "\n======= delete - Heap ======" <<std::endl;
	delete dynamicZombie;
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombieNew;

	std::cout << "\n======= delete - Stack && program ending ======" <<std::endl;
	return 0;
}
