/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 01:08:55 by gyson             #+#    #+#             */
/*   Updated: 2016/08/21 14:22:22 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putline(char *str);
void	ft_putchar(char c);

void	print_sudoku(char **board)
{
	int i;

	i = 0;
	while (i < 9)
	{
		ft_putline(board[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *str)
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar(str[i]);
}
