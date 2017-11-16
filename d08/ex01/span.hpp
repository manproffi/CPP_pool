/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:54:10 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 19:54:11 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>

class Span
{
private:
	unsigned int 			n;
	std::vector<int>		v1;


public:
	Span();

	Span(unsigned int a);

	Span(Span const & ref);

	Span& operator= (Span const & ref);

	~Span();

	unsigned int 				getN() const;

	const std::vector<int> 		&getV1() const;

	void 						setV1(const std::vector<int> &v1);

	void 						setN(unsigned int n);

	void	addNumber(int);

	int 	shortestSpan();
	int 	longestSpan();

	int		difference(int const a, int const b);

};

#endif
