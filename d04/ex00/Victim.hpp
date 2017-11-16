/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:53:15 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:53:18 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
private:
	std::string name;
public:
	Victim();
	Victim(std::string name);
	Victim(Victim const &a);
	Victim& operator= (Victim const & a);

	std::string		getName()const;
	void			getPolymorphed() const;
	
	void			setName(std::string name);
	
	~Victim();
};

std::ostream& operator << (std::ostream& ss, Victim const & ref);


#endif
