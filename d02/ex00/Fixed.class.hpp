/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:05:07 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 17:05:10 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
class Fixed
{
private:
	int 				fixedPoint;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(Fixed & a);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed&	operator= (Fixed&);
};

#endif
