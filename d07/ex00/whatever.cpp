/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 23:53:07 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/08 23:53:09 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
T 	max( T const & a, T const & b)
{
	return (a >= b ? a : b);
}

template< typename D >
D 	min( D const & a, D const & b)
{
	return (a <= b ? a : b);
}

template< typename G >
void	swap( G &a, G &b)
{
	G temporary = a;
	a = b;
	b = temporary;
}


