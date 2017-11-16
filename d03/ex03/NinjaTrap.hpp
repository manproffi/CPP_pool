/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 00:31:12 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 00:31:13 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	
	void	ninjaShoebox(ClapTrap & ref);
	void	ninjaShoebox(ScavTrap & ref);
	void	ninjaShoebox(FragTrap & ref);
	void	ninjaShoebox(NinjaTrap & ref);
	
	~NinjaTrap();

};

#endif
