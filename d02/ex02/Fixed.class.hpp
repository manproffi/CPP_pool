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

	Fixed& operator++ ();
	Fixed operator++ (int);
	Fixed& operator-- ();
	Fixed operator-- (int);

	Fixed operator+ (Fixed a) const;
	Fixed operator- (Fixed a) const;
	Fixed operator* (Fixed a) const;
	Fixed operator/ (Fixed a) const;
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

	bool operator < (const Fixed& a);
	bool operator > (const Fixed& a);
	bool operator <= (const Fixed& a);
	bool operator >= (const Fixed& a);
	bool operator == (const Fixed& a);
	bool operator != (const Fixed& a);
};

std::ostream& operator<< (std::ostream& os, Fixed const& a);



#endif
