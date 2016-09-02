# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 19:29:46 by gyson             #+#    #+#              #
#    Updated: 2016/08/17 19:35:56 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c
gcc -c ft_swap.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c

ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
rm *.o
