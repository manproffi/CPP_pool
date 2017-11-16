/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:00:14 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/30 12:00:16 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void phoneBook::add(void)
{
	std::cout << "Please, enter your first name" << std::endl;
	std::getline(std::cin, this->_first_name);
	std::cout << "Please, enter your last name" << std::endl;
	std::getline(std::cin, _last_name);
	std::cout << "Please, enter your nickname" << std::endl;
	std::getline(std::cin, _nickname);
	std::cout << "Please, enter your login" << std::endl;
	std::getline(std::cin, _login);
	std::cout << "Please, enter your postal_address" << std::endl;
	std::getline(std::cin, _postal_address);
	std::cout << "Please, enter your email_address" << std::endl;
	std::getline(std::cin, _email_address);
	std::cout << "Please, enter your phone_number" << std::endl;
	std::getline(std::cin, _phone_number);	
	std::cout << "Please, enter your birthday_date" << std::endl;
	std::getline(std::cin, _birthday_date);
	std::cout << "Please, enter your favorite_meal" << std::endl;
	std::getline(std::cin, _favorite_meal);
	std::cout << "Please, enter your underwear_color" << std::endl;
	std::getline(std::cin, _underwear_color);
	std::cout << "Please, enter your darkest_secret" << std::endl;
	std::getline(std::cin, _darkest_secret);
}

void	phoneBook::printPerson(void)
{
	std::cout << "=============================================" << std::endl;
	std::cout << "first_name: " << _first_name << std::endl;
	std::cout << "last_name: " << _last_name << std::endl;
	std::cout << "nickname: " << _nickname << std::endl;
	std::cout << "login: " << _login << std::endl;
	std::cout << "postal_address: " << _postal_address << std::endl;
	std::cout << "email_address: " << _email_address << std::endl;
	std::cout << "phone_number: " << _phone_number << std::endl;
	std::cout << "birthday_date: " << _birthday_date << std::endl;
	std::cout << "favorite_meal: " << _favorite_meal << std::endl;
	std::cout << "underwear_color: " << _underwear_color << std::endl;
	std::cout << "darkest_secret: " << _darkest_secret << std::endl;
}
