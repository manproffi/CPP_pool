/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:54:03 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/03 19:54:06 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int 	main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	//std::cout << "\n++++++++++++\n" << std::endl;
	

	std::cout << robert << jim << joe;
	



	//std::cout << "\n=======polymorphn======" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	return 0; 
}


