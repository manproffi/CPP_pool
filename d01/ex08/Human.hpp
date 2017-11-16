/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:58:03 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 13:58:04 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>

class Human
{
private:
	void	meleeAttack(std::string const & targert);
	void	rangedAttack(std::string const & targert);
	void	intimidatingShout(std::string const & targert);
public:
	Human();
	void	action(std::string const & action_name, std:: string const & target);
	~Human();
};

#endif
