/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:14:21 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:14:38 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP
# include <iostream>

class Game
{
public:
	Game();
	Game(int _x, int _y, char c);
	Game(Game const & src);
	~Game();
	Game &operator=(Game const & src);
	void setX(int _x);
	void setY(int _y);
	void setL(int _l);
	void setView(char c);
	int getY();
	int getX();
	int getL();
	char get_view();


protected:
	int HP;
	int x;
	int y;
	char view;
	int l;
};

#endif
