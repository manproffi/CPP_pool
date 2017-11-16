/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:43:45 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 14:43:47 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>

int		main(void)
{
	Logger logger;
	logger.log("logToConsole", "logToConsole");
	logger.log("logToFile", "logToFile");
	
	return 0;
}
