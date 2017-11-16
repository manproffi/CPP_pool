/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:53:43 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:53:45 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:
	std::string name;
public:
	Peon();
	Peon(std::string name);
	Peon(Peon const & a);
	~Peon();

	Peon& operator= (Peon const & a);
	
	std::string		getName()const;
	void 			getPolymorphed() const;
	
};

#endif
