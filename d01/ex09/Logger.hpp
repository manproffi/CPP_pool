/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:43:17 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 14:43:20 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>

class Logger
{
private:
	void			logToConsole(std::string const & targert);
	void			logToFile(std::string const & targert);
	std::string		makeLogEntry(std::string message);
	
	std::string 	nameOutputFile;
public:
	Logger();
	void			log(std::string const & dest, std::string const & message);
	~Logger();
	
};

#endif
