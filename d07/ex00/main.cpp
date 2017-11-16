/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 23:53:19 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/08 23:53:21 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.cpp"

int		main()
{
	int a = 2;
	int b = 3;

	::swap( a , b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a , b ) = " << ::min( a , b ) << std::endl;
	std::cout << "max( a , b ) = " << ::max( a , b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c , d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c , d ) = " << ::min( c , d ) << std::endl;
	std::cout << "max( c , d ) = " << ::max( c , d ) << std::endl;

	return 0;
}
