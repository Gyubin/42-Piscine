# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/27 21:08:06 by gyson             #+#    #+#              #
#    Updated: 2016/08/28 12:48:50 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-03

CC = gcc

FLAG = -Wall -Wextra -Werror

SRC = ft_tool.c rush04.c

OBJ = ft_tool.o rush04.o

HEADER = header.h

all:$(NAME)

$(NAME):
	@$(CC) $(FLAG) -c $(SRC)
	@$(CC) $(FLAG) main.c $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
