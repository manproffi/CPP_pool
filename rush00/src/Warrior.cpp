/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:16:09 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:16:11 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Warrior.hpp"
#include <sys/ioctl.h>

Warrior::Warrior(int x, int y, char c) : Game(x, y, c){

}

Warrior::Warrior() : Game(){
	struct winsize wt;
	ioctl(0, TIOCGWINSZ, &wt);
	y = rand() % wt.ws_row - 2;
	x = rand() % wt.ws_col - 2;
	if (y == 0)
		y = 1;
	if (x == 0)
		x = 1;
	view = 'o';
	l = 0;
}

Warrior::~Warrior() {

}

Warrior::Warrior(Warrior const & src)
{
	*this = src;
}

Warrior & Warrior::operator=(Warrior const & src)
{
	if (this != &src)
	{
		HP = src.HP;
		x = src.x;
		y = src.y;
	}
	return (*this);
}
