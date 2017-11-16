/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:58:21 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 13:58:22 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main()
{
	Human human;
	human.action("intimidatingShout", "intimidatingShout");
	human.action("rangedAttack", "rangedAttack");
	human.action("meleeAttack", "meleeAttack");
	return 0;
}
