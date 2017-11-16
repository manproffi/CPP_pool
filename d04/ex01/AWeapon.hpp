/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 23:13:36 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 23:13:39 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon
{
private:
	std::string 			name;
	int						apcost;
	int						damage;	
public:
	AWeapon();
	AWeapon(AWeapon const & a);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();

	AWeapon& operator= (AWeapon const & a);

	std::string virtual 	getName() const;
	int 					getAPCost() const;
	int						getDamage() const;
	void					setName(std::string name);
	void					setAPCost(int apcost);
	void					setDamage(int damage);

	virtual void attack() const = 0;
};

#endif
