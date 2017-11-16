/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:02:06 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/30 12:02:08 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	funPrint(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;

}

void addCommand(int& n_person, phoneBook *arrayBook)
{
	if (n_person == 8)
		std::cout << "You filled all fields. No more places." << std::endl;
	else
	{
		std::cout << "Please, enter information about person №" << (n_person + 1) << std::endl;
		arrayBook[n_person++].add();
	}
}

void	searchCommand(int& n_person, phoneBook *arrayBook)
{
	int  index;
	std::string indexSrting;
	bool flag = true;

	for (int i = 0; i < n_person; i++)
	{
		std::cout << std::setw(10) << (i + 1) << "|";
		funPrint(arrayBook[i].getFirstName());
		std::cout << "|";
		funPrint(arrayBook[i].getLastName());
		std::cout << "|";
		funPrint(arrayBook[i].getNickname());
		std::cout << std::endl;
	}

	while (flag)
	{
		std::cout << "Enter index from list: ";
		std::getline(std::cin, indexSrting);
		index = std::atoi(indexSrting.c_str());
		if (indexSrting.length() == 1 && index > 0 && index <= n_person)
		{
			flag = false;
			arrayBook[index - 1].printPerson();
		}
		else
			std::cout << "You entered incorrect data, try again\n";
	}
}

int		main(int argc, char const *argv[])
{
	int				n_person = 0;
	std::string		command;
	phoneBook		arrayBook[8]; 
	(void)argv;

	if (argc == 1)
	{
		do
		{
			std::cout << "Enter command ${command: EXIT | ADD | SEARCH}" << std::endl;
			std::getline(std::cin, command);
			if (command.compare("ADD") == 0)
				addCommand(n_person, arrayBook);
			else if (command.compare("SEARCH") == 0)
				searchCommand(n_person, arrayBook);
		} while (command.compare("EXIT") != 0);
	}
	else
		std::cout << "usage: ./phonebook" << std::endl;
	return 0;
}


