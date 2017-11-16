/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:16:50 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:16:58 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Window.hpp"

int main()
{
	srand(time(NULL));
	Window w;
	Player player(w.getw().ws_col / 2, w.getw().ws_row - 5);
	
	w.start(player);
	return 0;
}
