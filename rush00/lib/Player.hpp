/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:14:45 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:14:49 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define	PLAYER_HPP
# include "Game.hpp"

class Player : public Game
{
public:
	Player();
	Player(Player const & src);
	Player(int x, int y);
	Player & operator=(Player const & src);
	~Player();
	void setHP(int h);
	int getHP();
};


#endif
