/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 00:11:03 by alam              #+#    #+#             */
/*   Updated: 2016/08/21 00:11:07 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"

int	count_clues(int **grid)
{
	int row;
	int col;
	int number;
	int cluecount;

	cluecount = 0;
	row = 0;
	col = 0;
	number = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			if (grid[row][col] != 0)
				cluecount++;
			col++;
		}
		col = 0;
		row++;
	}
	return (cluecount);
}

int	check_arg(char **argv)
{
	int row;
	int col;

	row = 1;
	col = 0;
	while (row < 10)
	{
		while (col < 9)
		{
			if (argv[row][col] != '.' &&
				!(argv[row][col] > '0' && argv[row][col] <= '9'))
				return (0);
			col++;
		}
		col = 0;
		row++;
	}
	return (1);
}

int	check_input(int **grid)
{
	int row;
	int col;
	int number;

	row = 0;
	col = 0;
	number = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			if (grid[row][col] != 0)
			{
				number = grid[row][col];
				grid[row][col] = 0;
				if (is_valid(grid, row, col, number) == 0)
					return (0);
				grid[row][col] = number;
			}
			col++;
		}
		col = 0;
		row++;
	}
	return (1);
}

int	**fill_grid(int argc, char **argv)
{
	int i;
	int j;
	int **grid;

	i = 0;
	j = 0;
	grid = (int**)malloc(sizeof(int*) * (9));
	if (argc == 10)
	{
		while (i < 9)
		{
			grid[i] = (int*)malloc(sizeof(int) * 9);
			while (j < 9)
			{
				if ((argv[i + 1][j] >= '0') && (argv[i + 1][j] <= '9'))
					grid[i][j] = argv[i + 1][j] - 48;
				else if (argv[i + 1][j] == '.')
					grid[i][j] = 0;
				j++;
			}
			j = 0;
			i++;
		}
	}
	return (grid);
}

int	main(int argc, char **argv)
{
	int **grid;

	if (argc != 10 || !check_arg(argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = fill_grid(argc, argv);
	ft_putstr("Input Grid:\n");
	print_grid(grid);
	if (count_clues(grid) < 17 || check_input(grid) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (sudoku(grid))
	{
		ft_putstr("Solved Grid:\n");
		print_grid(grid);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
