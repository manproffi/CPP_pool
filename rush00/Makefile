# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vshalaba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 17:53:16 by vshalaba          #+#    #+#              #
#    Updated: 2017/11/04 13:48:24 by vshalaba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

SRC = src/main.cpp \
		src/Window.cpp \
		src/Game.cpp \
		src/Palyer.cpp \
        src/Warrior.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

CC = clang++

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)  -lncurses

%.o: %.cpp
	$(CC) $(CFLAGS) -c  -o $@ $< 

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all