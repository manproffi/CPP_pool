/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:37:07 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 11:37:08 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
private:
	std::string	_name;
	double 		_hight;
	std::string	_color;
	int 		_age;
public:
	Pony(void);
	Pony(std::string, double, std::string, int);
	~Pony(void);
};

#endif
