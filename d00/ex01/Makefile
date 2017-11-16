# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 11:58:16 by sprotsen          #+#    #+#              #
#    Updated: 2017/10/30 11:58:20 by sprotsen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp ClassPhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

CC = clang++

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c  -o $@ $< 

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all