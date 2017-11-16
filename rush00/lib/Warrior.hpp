/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:14:59 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:15:04 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_HPP
# define WARRIOR_HPP
# include "Game.hpp"

class Warrior : public Game
{
public:
	Warrior();
	Warrior(Warrior const & src);
	Warrior(int x, int y, char c);
	Warrior & operator=(Warrior const & src);
	~Warrior();
};

#endif
