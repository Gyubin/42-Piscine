# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/31 15:27:15 by gyson             #+#    #+#              #
#    Updated: 2016/08/31 20:30:18 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
FLAG = -Wall -Wextra -Werror
FILENAME = ft_print.c ft_make_box.c ft_tools.c ft_get_obstacle.c
SRC = $(wildcard srcs/*.c)
OBJ = $(FILENAME:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) -c $(SRC)
	@$(CC) $(FLAG) main.c $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
