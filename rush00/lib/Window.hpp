/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:15:16 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:15:23 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP
# include <iostream>
# include <ncurses.h>
# include <unistd.h>
# include <ctime>
# include <sys/ioctl.h>
# include "../lib/Player.hpp"
# include "../lib/Warrior.hpp"

class Window
{
public:
	Window();
	~Window();
	Window(Window const & src);
	Window & operator=(Window const & src);
	WINDOW * getWind(void);
	struct winsize getw();
	void start(Player & player);
	void draw_box( void );
	void Frame();
	void printff(Player & player);
	void keyControl(Player & player);
	void meteorSpeed();
	void atac();

private:
	WINDOW *wnd;
	int in_char;
	Warrior *war;
	Warrior *attack;
	struct winsize wt;
	bool exit_requested;
	clock_t st;
	int score;
	int speed;
};



#endif
