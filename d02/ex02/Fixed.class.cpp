/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:05:19 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/01 17:05:20 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(): fixedPoint(0)
{}

Fixed::Fixed(Fixed & a)
{
	this->fixedPoint = a.getRawBits();
}

Fixed::Fixed(const Fixed & a)
{
	*this = a;
}

Fixed::Fixed(const int a)
{
 	this->fixedPoint = (a << 8);
 }

Fixed::Fixed(const float a)
{
	this->fixedPoint = std::roundf(a * 256.0f);
}

int 	Fixed::toInt(void) const
{
	return (this->fixedPoint >> 8);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>((float)this->fixedPoint / 256));
}

Fixed& Fixed::operator= (Fixed const & a)
{
	this->fixedPoint = a.fixedPoint;
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	return ((this->fixedPoint));
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedPoint = (raw << 8);
}

Fixed::~Fixed()
{}

std::ostream& operator<< (std::ostream& os, Fixed const & a)
{
	os << a.toFloat();
	return os;
}

Fixed& Fixed::operator++ ()
{
	this->fixedPoint++;
	return *this;
}

Fixed Fixed::operator++ (int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed& Fixed::operator-- ()
{
	this->fixedPoint--;
	return *this;
}

Fixed Fixed::operator-- (int)
{
	Fixed temp = *this;
	--*this;
	return *this;
}

Fixed Fixed::operator+ (Fixed a) const
{
	Fixed tmp;
	tmp.fixedPoint = this->fixedPoint + a.fixedPoint;
	return tmp;
}

Fixed Fixed::operator- (Fixed a) const
{
	Fixed tmp;
	tmp.fixedPoint = this->fixedPoint - a.fixedPoint;
	return tmp;
}

Fixed Fixed::operator* (Fixed a) const
{
	Fixed tmp;
	tmp.fixedPoint = ((this->fixedPoint * a.fixedPoint) >> 8);
	return tmp;
}

Fixed Fixed::operator/ (Fixed a) const
{
	Fixed tmp;
	tmp.fixedPoint = ((this->fixedPoint) << 8) / a.fixedPoint;
	return tmp;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed&  Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

bool Fixed::operator < (const Fixed& a)
{
	return this->fixedPoint < a.fixedPoint ? true : false; 
}

bool Fixed::operator > (const Fixed& a)
{
	return this->fixedPoint > a.fixedPoint ? true : false; 
}

bool Fixed::operator <= (const Fixed& a)
{
	return this->fixedPoint <= a.fixedPoint ? true : false; 
}

bool Fixed::operator >= (const Fixed& a)
{
	return this->fixedPoint >= a.fixedPoint ? true : false; 
}

bool Fixed::operator == (const Fixed& a)
{
	return this->fixedPoint == a.fixedPoint ? true : false; 
}

bool Fixed::operator != (const Fixed& a)
{
	return this->fixedPoint != a.fixedPoint ? true : false; 
}



