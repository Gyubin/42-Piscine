/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:27:47 by alam              #+#    #+#             */
/*   Updated: 2016/08/20 23:27:49 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	find_empty_cell(int **grid, int *row, int *col)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (grid[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	sudoku(int **grid)
{
	int row;
	int col;
	int number;

	number = 1;
	if (find_empty_cell(grid, &row, &col) == 0)
		return (1);
	while (number <= 9)
	{
		if (is_valid(grid, row, col, number))
		{
			grid[row][col] = number;
			if (sudoku(grid) == 1)
				return (1);
			grid[row][col] = 0;
		}
		number++;
	}
	return (0);
}
