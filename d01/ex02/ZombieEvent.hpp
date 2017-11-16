/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:05:12 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 13:05:14 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include <ctime>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type;
public:
	ZombieEvent()
	{};
	void		setZombieType(std::string type);
	Zombie*		newZombie(std::string name);
	Zombie*		randomChump();
	~ZombieEvent();
};

#endif
