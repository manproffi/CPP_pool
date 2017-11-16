/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:58:09 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 13:58:10 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

void	Human::meleeAttack(std::string const & targert)
{
	std::cout << "=== Human::meleeAttack ===" << std::endl;
	std::cout << targert << std::endl;
}

void	Human::rangedAttack(std::string const & targert)
{
	std::cout << "=== Human::rangedAttack ===" << std::endl;
	std::cout << targert << std::endl;
}

void	Human::intimidatingShout(std::string const & targert)
{
	std::cout << "=== Human::intimidatingShout ===" << std::endl;
	std::cout << targert << std::endl;
}

void	Human::action(std::string const & action_name, std:: string const & target)
{
	typedef void (Human::*ptrMyFuncType)(std::string const & targert);

	ptrMyFuncType myFunction[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string name[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	for(int i = 0; i < 3; i++)
	{
		if(name[i] == action_name)
			(this->*myFunction[i])(target);
    }
}
