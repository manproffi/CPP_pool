/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:59:59 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/30 12:00:02 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class phoneBook
{
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;
public:
	phoneBook()
	{}
	std::string 	getFirstName()const
	{
		return _first_name;
	}
	std::string 	getLastName()const
	{
		return _last_name;
	}
	std::string 	getNickname()const
	{
		return _nickname;
	}
	void 			add(void);
	void			printPerson(void);
	~phoneBook()
	{}
};

#endif
