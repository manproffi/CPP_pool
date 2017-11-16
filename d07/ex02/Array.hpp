/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:46:05 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 12:46:06 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template < class T >
class Array
{
private:
	unsigned int		len;
	T 				* 	a;
public:

	Array<T>() :  len(0), a(NULL)
	{}
	
	Array<T>(unsigned int n): len(n)
	{
		a = new T[n];
	}

	Array<T>(Array<T> const & ref)
	{
		*this = ref;
	}
	
	Array<T>& operator = (Array<T> const & ref)
	{
		if (this == &ref)
			return *this;
		if (this->a != NULL)
			delete [] this->a;
	
		this->len = ref.getLen();
		this->a = new T[this->len];
		for (int i = 0; i < this->len ; i++)
			this->a[i] = ref[i];
		return *this;
	}
	
	T 		*		getLink() const
	{
		return a;
	}
	
	unsigned int 	getLen() const
	{
		return len;
	}

	T &			operator [] (unsigned int i)
	{
		if (i >= this->len)
			throw std::exception();
		return this->a[i];
	}

	~Array<T>(void)
	{
		if (this->a != NULL)
			delete[] this->a;
	};

	unsigned int	size() const
	{
		return len;
	}
	
};


#endif
