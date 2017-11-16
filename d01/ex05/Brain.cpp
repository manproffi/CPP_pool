/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:06:08 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 20:06:11 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"
#include <iomanip>
#include <sstream>

Brain::Brain()
{
	value = "Brain";
}

std::string Brain::identify()
{
	std::stringstream ss;
	ss << this;
	return ss.str();
}
