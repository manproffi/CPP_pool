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
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed & a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = a.getRawBits();
}

Fixed::Fixed(const Fixed & a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int a)
{
 	std::cout << "Int constructor called" << std::endl;
 	this->fixedPoint = (a << 8);
 	
}

Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = a.fixedPoint;
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ((this->fixedPoint));
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = (raw << 8);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

std::ostream& operator<< (std::ostream& os, Fixed const & a)
{
	os << a.toFloat();
	return os;
}
