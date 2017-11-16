/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:43:54 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 21:43:55 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon()
	{};
	Weapon(std::string str);
	const std::string& 		getType();
	void					setType(std::string str);
	
	~Weapon()
	{}
	
};

#endif
