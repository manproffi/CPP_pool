/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:11:20 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 17:11:23 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n)
{
	num = n;
	zmbs = new Zombie[n];
}

ZombieHorde::~ZombieHorde()
{
	delete[] zmbs;
}

void	ZombieHorde::announce()const
{
	for (int i = 0; i < num; i++)
		zmbs[i].announce();
}
