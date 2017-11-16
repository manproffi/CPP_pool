/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 01:06:44 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 01:06:46 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string		name;
	int				ap;
	AWeapon			*aWeapon;
public:
	Character();
	Character(std::string const & name);
	Character(Character const & a);
	virtual ~Character();
	void 					recoverAP();
	void 					equip(AWeapon* a);
	void 					attack(Enemy* a);
	std::string virtual		getName() const;
	int						getAP() const;

	AWeapon*				getaWepon() const;



	void					setName(std::string name);
	void					setAP(int ap);



	Character& operator= (Character const & a);
};

std::ostream& operator << (std::ostream& ss,  Character const & ref);


#endif