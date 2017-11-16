/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:06:33 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/31 20:06:37 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain()
{}

std::string Human::identify(){
	return (const_cast<Brain&>(brain)).identify();
}

Brain&	Human::getBrain(){
	return (const_cast<Brain&>(brain));
}
