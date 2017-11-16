/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 23:38:58 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 23:39:00 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const & a);
	PowerFist(std::string const & name, int apcost, int damage);
	~PowerFist();

	PowerFist& operator=(PowerFist const& a);
	
	void 		takeDamage(int dam);


	void 	attack() const;
};

#endif
