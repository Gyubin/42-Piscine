/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:44:51 by alam              #+#    #+#             */
/*   Updated: 2016/08/20 22:44:53 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudokucheck.h"

int	check_row(int **grid, int row, int number)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[row][i] == number)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int **grid, int col, int number)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][col] == number)
			return (0);
		i++;
	}
	return (1);
}

int	check_square(int **grid, int row, int col, int number)
{
	int startrow;
	int startcol;
	int i;
	int j;

	i = 0;
	j = 0;
	startrow = (row / 3) * 3;
	startcol = (col / 3) * 3;
	while (i < 3)
	{
		while (j < 3)
		{
			if (grid[startrow + i][startcol + j] == number)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	is_valid(int **grid, int row, int col, int number)
{
	if (check_row(grid, row, number) &&
		check_col(grid, col, number) &&
		check_square(grid, row, col, number))
		return (1);
	else
		return (0);
}
