/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokuprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:34:21 by alam              #+#    #+#             */
/*   Updated: 2016/08/21 13:34:23 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudokuprint.h"

void	ft_putchar(char input)
{
	write(1, &input, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_putstr("-------------------------\n");
	while (i < 9)
	{
		while (j < 9)
		{
			if (j == 0)
				ft_putstr("| ");
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
			j++;
			if (j % 3 == 0)
				ft_putstr("| ");
		}
		ft_putchar('\n');
		j = 0;
		i++;
		if (i % 3 == 0)
			ft_putstr("-------------------------\n");
	}
}
