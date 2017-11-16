/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:32:12 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/02 12:32:14 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

# include "ClapTrap.hpp" 

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);

	void 	vaulthunter_dot_exe(std::string const & target);

	~FragTrap();
	
};

#endif
