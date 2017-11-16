/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:15:42 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:15:43 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Game.hpp"


Game::Game(int _x, int _y, char c) : x(_x), y(_y), view(c)
{
}

Game::Game(){

}

Game::~Game(){

}

Game::Game(Game const & src)
{
	*this = src;
}
Game & Game::operator=(Game const & src)
{
	if (this != &src)
	{
		HP = src.HP;
		x = src.x;
		y = src.y;
		view = src.view;
	}
	return (*this);
}

void Game::setX(int _x)
{
	if (_x == 0)
		_x = 1;
	this->x = _x;
}

void Game::setY(int _y)
{
	if (_y <= 0) {
		_y = 1;
		l = 0;
	}
	this->y = _y;
}

void Game::setL(int _l)
{
	this->l = _l;
}

void Game::setView(char c){
	this->view = c;
}

int Game::getY()
{
	return (this->y);
}

int Game::getX()
{
	return (this->x);
}

char Game::get_view()
{
	return (this->view);
}

int Game::getL()
{
	return (this->l);
}
