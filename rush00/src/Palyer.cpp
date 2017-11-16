/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Palyer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:15:54 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:15:55 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Player.hpp"

Player::Player(int x, int y) : Game(x, y, 'A'){
HP = 100;
l = 0;
}

Player::Player() : Game(){

}

Player::~Player() {

}

Player::Player(Player const & src)
{
	*this = src;
}

Player & Player::operator=(Player const & src)
{
	if (this != &src)
	{
		HP = src.HP;
		x = src.x;
		y = src.y;
	}
	return (*this);
}

int Player::getHP()
{
	return (this->HP);
}

void Player::setHP(int h)
{
	HP -= h;
}
