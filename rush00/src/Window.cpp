/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:16:29 by vshalaba          #+#    #+#             */
/*   Updated: 2017/11/05 17:16:31 by vshalaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Window.hpp"

Window::Window()
{
	ioctl(0, TIOCGWINSZ, &wt);
	war = new Warrior[wt.ws_col / 5];
	attack = new Warrior[20];
	wnd = initscr();
	score = 0;
	cbreak();
	noecho();
	clear();
	refresh();
	keypad(wnd, true);
	nodelay(wnd, true);
	curs_set(0);
	if(!has_colors()) {
		endwin();
		printf("ERROR: Terminal does not support color.\n");
		exit(1);
	}
	start_color();
	exit_requested = false;
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
}

Window::~Window()
{
	delete [] war;
	delete [] attack;
	endwin();
}
Window::Window(Window const & src)
{
	*this = src;
}

Window & Window::operator=(Window const & src)
{
	if (this != &src)
	{
		this->wnd = src.wnd;
	}
	return (*this);
}

void Window::start(Player & player)
{
	int iter = -1;
	int speed = 3;

	while(1) {
		st = clock();
		draw_box();
		printff(player);
		iter++;
		in_char = wgetch(wnd);
		mvaddch(player.getY(), player.getX(), ' ');
		for (int j = 0; j < 20; j++)
			mvaddch(attack[j].getY(), attack[j].getX(), ' ');
		keyControl(player);
		if (iter == 400 || iter == 5000)
			speed--;
		if (iter % speed == 0)
			meteorSpeed();
		for (int i = 0; i < wt.ws_col / 5; i++) {
			if (war[i].getL() == 0)
			{
				attron(COLOR_PAIR(3));
				mvaddch(war[i].getY(), war[i].getX(), war[i].get_view());
				attroff(COLOR_PAIR(3));}
		}
		for (int j = 0; j < wt.ws_col / 5; j++)
		{
			if (player.getX() == war[j].getX() && player.getY() == war[j].getY() &&
					war[j].getL() == 0)
			{
				if (player.getHP() > 25)
				{
					war[j].setL(1);
					player.setHP(25);
				}
				else
					player.setL(1);
			}
		}
		atac();
		if (player.getL() == 0)
		{
			if (player.getX() >= wt.ws_col - 2)
				player.setX(wt.ws_col - 2);
			if (player.getX() <= 0)
				player.setX(1);
			if (player.getY() <= 0)
				player.setY(1);
			if (player.getY() >= wt.ws_row - 1)
				player.setY(wt.ws_row - 2);
			attron(COLOR_PAIR(2));
			mvaddch(player.getY(), player.getX(), player.get_view());
			attroff(COLOR_PAIR(2));
		}
		for (int j = 0; j < 20; j++)
		{
			for (int i = 0; i < wt.ws_col / 5; i++)
				if (attack[j].getX() == war[i].getX() && attack[j].getY() == war[i].getY() &&
						attack[j].getL() == 1 && war[i].getL() == 0)
				{
					score += 25;
					attack[j].setL(0);
					war[i].setL(1);
				}
		}
		if(exit_requested) break;
		Frame();
		refresh();
	}
}

void Window::draw_box( void )
{
	int x, y = 0;

	while (y <= wt.ws_row - 1)
	{
		x = 0;
		while (x <= wt.ws_col - 1)
		{
			if (x == 0 || y == 0 || x == wt.ws_col - 1 || y == wt.ws_row - 1)
			{
				attron(COLOR_PAIR(1));
				mvaddch(y, x, '^');
				attroff(COLOR_PAIR(1));
			}
			x++;
		}
		y++;
	}
	attron(COLOR_PAIR(2));
	mvaddch(0, 0, 'x');
	mvaddch(0, wt.ws_col - 1, 'x');
	mvaddch(wt.ws_row - 1, 0, 'x');
	mvaddch(wt.ws_row - 1, wt.ws_col - 1, 'x');
	attroff(COLOR_PAIR(2));
}


struct winsize Window::getw()
{
	return (this->wt);
}

void Window::Frame() {

	double e;
	useconds_t delay;


	e = static_cast<clock_t>((st - clock()) / (double) CLOCKS_PER_SEC);
	delay = static_cast<useconds_t>(e) / 200000;
	usleep(delay);
}

void Window::printff(Player & player)
{
	if (player.getL() == 0)
		mvwprintw(wnd, 0, wt.ws_col / 3 + 5, " HP : %d Score: %d", player.getHP(), score);
	else
	{	
		attron(COLOR_PAIR(2));
		mvwprintw(wnd, wt.ws_row / 2 , wt.ws_col / 3, "             RETRY: enter \t EXIT: q");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvwprintw(wnd, wt.ws_row / 2 - 6, wt.ws_col / 4, "   _____          __  __ ______    ______      ________ _____");
		mvwprintw(wnd, wt.ws_row / 2 - 5, wt.ws_col / 4,    "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ ");
		mvwprintw(wnd, wt.ws_row / 2 - 4, wt.ws_col / 4,     " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |");
		mvwprintw(wnd, wt.ws_row / 2  - 3, wt.ws_col / 4,   " | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /");
		mvwprintw(wnd, wt.ws_row / 2  - 2, wt.ws_col / 4,    " | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\");
		mvwprintw(wnd, wt.ws_row / 2  - 1, wt.ws_col / 4,    "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\");
		attroff(COLOR_PAIR(1));
	}
}

void Window::keyControl(Player & player)
{
	switch(in_char) {
		case 'q':
			exit_requested = true;
			break;
		case KEY_UP:
		case 'w':
			player.setY(player.getY() - 1);
			break;
		case KEY_DOWN:
		case 's':
			player.setY(player.getY() + 1);
			break;
		case KEY_LEFT:
		case 'a':
			player.setX(player.getX() - 1);
			break;
		case KEY_RIGHT:
		case 'd':
			player.setX(player.getX() + 1);
			break;
		case ' ':
			if (player.getL() == 0)
				for (int j = 0; j < 20; j++)
				{
					attack[j].setView('*');
					if (attack[j].getL() == 0)
					{
						attack[j].setY(player.getY());
						attack[j].setX(player.getX());
						attack[j].setL(1);
						break ;
					}
				}
			break ;
		case '\n':
			if (player.getL() == 1)
			{
				clear();
				player.setX(wt.ws_col / 2);
				player.setY(wt.ws_row - 5);
				player.setHP(-75);
				player.setL(0);
				speed = 3;
				score = 0;
			}
		default:
			break;
	}
}

void Window::atac()
{
	for (int j = 0; j < 20; j++)
	{
		if (attack[j].getL() == 1)
		{
			attack[j].setY(attack[j].getY() - 1);
			if (attack[j].getY() <= 0) {
				attack[j].setL(0);
			}
			else
				mvaddch(attack[j].getY(), attack[j].getX(), attack[j].get_view());
		}
	}
}

void Window::meteorSpeed()
{
	for (int i = 0; i < wt.ws_col / 5; i++)
		mvaddch(war[i].getY(), war[i].getX(), ' ');
	for (int i = 0; i < wt.ws_col / 5; i++) {
		if (war[i].getL() == 0) {
			war[i].setY(war[i].getY() + 1);
			if (war[i].getY() >= wt.ws_row - 1) {
				war[i].setX(rand() % ((int) wt.ws_col - 2));
				war[i].setY(1);
			}
			attron(COLOR_PAIR(3));
			mvaddch(war[i].getY(), war[i].getX(), war[i].get_view());
			attroff(COLOR_PAIR(3));
		}
		else
		{
			war[i].setL(0);
			war[i].setX(rand() % ((int) wt.ws_col - 2));
			war[i].setY(1);
		}
	}
}
