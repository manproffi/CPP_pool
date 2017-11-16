/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 00:58:42 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/04 00:58:44 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const & a);

	RadScorpion(int hp, std::string const & type);
	~RadScorpion();

	RadScorpion& operator= (RadScorpion const & a);
	void 			takeDamage(int);
};

#endif
