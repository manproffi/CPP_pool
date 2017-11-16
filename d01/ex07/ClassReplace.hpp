/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassReplace.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:18:29 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 12:18:30 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSREPLACE_HPP
# define CLASSREPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class ClassReplace
{
private:
	std::string		inputName;
	std::string		outputName;

public:
	ClassReplace();

	ClassReplace(std::string inputName, std::string outputName);

	void 	replace(std::string s1, std::string s2);

	~ClassReplace();
	
};


#endif
