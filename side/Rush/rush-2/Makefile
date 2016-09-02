# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/28 05:18:41 by gyson             #+#    #+#              #
#    Updated: 2016/08/28 13:55:55 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = rush-2

NAME00 = rush-00

NAME01 = rush-01

NAME02 = rush-02

NAME03 = rush-03

NAME04 = rush-04

SRC00_PATH = ./rush00-rush04/

SRC00 = $(SRC00_PATH)ft_atoi.c $(SRC00_PATH)ft_putchar.c

MAIN00 = ./rush00-rush04/main.c

FLAG = -Wall -Werror -Wextra

OBJ = ft_board.o ft_check.o ft_check_common.o ft_print.o ft_tools.o

SRC_PATH = ./srcs/

SRC = $(SRC_PATH)ft_board.c $(SRC_PATH)ft_check.c $(SRC_PATH)ft_check_common.c \
	  $(SRC_PATH)ft_print.c $(SRC_PATH)ft_tools.c

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(MAIN00) $(SRC00) $(SRC00_PATH)$(NAME00).c -o $(NAME00)
	@$(CC) $(FLAG) $(MAIN00) $(SRC00) $(SRC00_PATH)$(NAME01).c -o $(NAME01)
	@$(CC) $(FLAG) $(MAIN00) $(SRC00) $(SRC00_PATH)$(NAME02).c -o $(NAME02)
	@$(CC) $(FLAG) $(MAIN00) $(SRC00) $(SRC00_PATH)$(NAME03).c -o $(NAME03)
	@$(CC) $(FLAG) $(MAIN00) $(SRC00) $(SRC00_PATH)$(NAME04).c -o $(NAME04)
	@$(CC) $(FLAG) -c $(SRC)
	@$(CC) $(FLAG) main.c $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(NAME00)
	@/bin/rm -f $(NAME01)
	@/bin/rm -f $(NAME02)
	@/bin/rm -f $(NAME03)
	@/bin/rm -f $(NAME04)

re: fclean all
