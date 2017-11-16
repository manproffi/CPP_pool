/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:44:29 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 21:44:30 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon*			weapon;
	std::string		name;
public:
	HumanA()
	{}
	HumanA(std::string name, Weapon& weapon);
	void	attack()const;
	~HumanA()
	{}
	
};

#endif
