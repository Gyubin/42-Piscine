# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 04:27:00 by gyson             #+#    #+#              #
#    Updated: 2016/08/23 23:22:28 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_NAME = do-op

LIB_NAME = libft.a

HEADER_PATH = ./includes

SRC_PATH = ./srcs

SRC = $(SRC_PATH)/ft_print.c $(SRC_PATH)/ft_check.c $(SRC_PATH)/ft_solve.c

OBJ = ./ft_print.o ./ft_check.o ./ft_solve.o

CC = gcc

FLAG = -Wall -Werror -Wextra

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
