# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 04:27:00 by gyson             #+#    #+#              #
#    Updated: 2016/08/23 16:00:58 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER_PATH = /includes

SRC_PATH = ./srcs

SRC = $(SRC_PATH)/ft_putchar.c $(SRC_PATH)/ft_putstr.c $(SRC_PATH)/ft_strcmp.c \
	  $(SRC_PATH)/ft_strlen.c $(SRC_PATH)/ft_swap.c

OBJ = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

CC = gcc

FLAG = -Wall -Werror -Wextra

OPTION = -c -I $(HEADER_PATH)

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(OPTION) $(SRC) 
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
