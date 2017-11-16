/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:52:39 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:52:46 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
private:
	std::string		name;
	std::string		title;

public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer& a);
	~Sorcerer();

	Sorcerer& operator= (Sorcerer const & a);

	std::string		getName()const;
	std::string		getTitle()const;

	void		setName(std::string name);
	void		setTitle(std::string title);

	void		polymorph(Victim const &) const;
	void		polymorph(Peon const &) const;
};

std::ostream& operator << (std::ostream& ss, Sorcerer const & ref);

#endif
