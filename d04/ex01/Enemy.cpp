/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 00:32:03 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 00:32:04 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(Enemy const & a)
{
	hp = a.getHP();
	type = a.getType();
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy()
{}


std::string			 	Enemy::getType() const { return type; }
int 					Enemy::getHP() const { return hp; }


void					Enemy::setType(std::string type) { this->type = type; }
void					Enemy::setHP(int hp) { this->hp = hp; }

void 					Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	setHP(getHP() - damage);
}

Enemy& Enemy::operator= (Enemy const & a)
{
	hp = a.getHP();
	type = a.getType();
	return *this;
}