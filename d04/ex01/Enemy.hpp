/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 00:32:08 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 00:32:10 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy
{
private:
	int				hp;
	std::string		type;

public:
	Enemy();
	Enemy(Enemy const & a);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	
	Enemy& operator= (Enemy const & a);


	std::string virtual		getType() const;
	int						getHP() const;

	void					setType(std::string type);
	void					setHP(int hp);

	virtual void			takeDamage(int);
};

#endif
