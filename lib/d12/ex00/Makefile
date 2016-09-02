# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/25 16:25:00 by gyson             #+#    #+#              #
#    Updated: 2016/08/25 21:29:52 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_NAME = ft_display_file

LIB_NAME = libft.a

CC = gcc

FLAG = -Wall -Wextra -Wall

SRC_PATH = ./srcs/

SRC = $(SRC_PATH)ft_display_file.c $(SRC_PATH)ft_print.c

OBJ = ft_display_file.o ft_print.o

HEADER_PATH = ./includes/

OPTION = -c -I $(HEADER_PATH)

LIBRARY = -L. -lft

all: $(EXE_NAME)

$(LIB_NAME):
	@$(CC) $(FLAG) $(OPTION) $(SRC)
	@ar rc $(LIB_NAME) $(OBJ)

$(EXE_NAME): $(LIB_NAME)
	@$(CC) $(FLAG) -o $(EXE_NAME) main.c $(LIBRARY)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(LIB_NAME)
	@/bin/rm -f $(EXE_NAME)

re: fclean all
