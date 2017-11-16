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
# include <cmath>
class Fixed
{
private:
	int 				fixedPoint;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(Fixed & a);
	Fixed(const Fixed & a);
	Fixed(const int a);
	Fixed(const float a);

	int toInt(void) const;
	float toFloat(void) const;
	
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed&	operator= (Fixed const & a);
};

std::ostream& operator<< (std::ostream& os, Fixed const& a);


#endif
