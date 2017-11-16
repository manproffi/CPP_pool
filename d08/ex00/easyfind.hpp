/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:08:07 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 17:08:09 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
void	easyfind(T container, int searching)
{
	typename T::iterator it;


	it = find(container.begin(), container.end(), searching);
	
	if (it != container.end())
		std::cout << "Element found in my container : " << *it << std::endl;
	else
		throw std::exception();
}

#endif
