/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:43:09 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 14:43:12 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <fstream>
#include <ctime>

Logger::Logger(): nameOutputFile("logFile.txt")
{}

Logger::~Logger()
{}

void		Logger::logToConsole(std::string const & targert)
{
	std::cout << targert << std::endl;
}

void		Logger::logToFile(std::string const & targert)
{
	std::ofstream output(nameOutputFile, std::ios::app);
    output << targert << std::endl;
    output.close();
}

std::string	Logger::makeLogEntry(std::string message) {
	time_t now = time(0);
	char* date = ctime(&now);
	std::string str = date;
	str.erase(str.end()-1, str.end());
	message = str + ": " + message;

	return message;
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	typedef void (Logger::*FUN)(std::string const & message);

	FUN fun[] = {&Logger::logToFile, &Logger::logToConsole};
	std::string name[] = {"logToFile", "logToConsole"};
	for(int i = 0; i < 2; i++)
	{
		if(name[i] == dest)
			(this->*fun[i])(makeLogEntry(message));
    }
}


