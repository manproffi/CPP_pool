/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:44:40 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 21:44:41 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon*			weapon;
	std::string		name;
public:
	HumanB()
	{}
	HumanB(std::string name);
	HumanB(std::string name, Weapon& weapon);
	void	attack()const;

	void				setWeapon(Weapon& weapon);

	~HumanB()
	{}
	
};

#endif
