/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:11:29 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 17:11:31 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
private:
	int num;
	Zombie *zmbs;
public:
	ZombieHorde(int n);
	void	announce()const;
	~ZombieHorde();
};

#endif
