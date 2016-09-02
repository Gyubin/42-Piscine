/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 01:13:25 by gyson             #+#    #+#             */
/*   Updated: 2016/08/21 14:48:45 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_valid_element(char **b);
int		check_all(char **b, int r, int c);
char	**copy(char **b);
int		*put_value_to_next_dot(char c, char ***b);
void	print_sudoku(char **board);

char	**solve_sudoku(char **b)
{
	int		*current_row_col;
	char	**current_b;
	char	i;
	char	**temp;

	i = '1';
	while (i <= '9')
	{
		current_b = copy(b);
		current_row_col = put_value_to_next_dot(i, &current_b);
		print_sudoku(current_b);
		printf("=====================\n");
		if (check_all(current_b, current_row_col[0], current_row_col[1]))
		{
			if (current_row_col[0] == 8 && current_row_col[1] == 8)
				return (current_b);
			temp = solve_sudoku(current_b);
			if (!temp)
				return temp;
		}
		free(current_b);
		i++;
	}
	free(b);
	return (NULL);
}

int		*put_value_to_next_dot(char v, char ***b)
{
	int r;
	int c;
	int	*row_col;

	row_col = (int *)malloc(sizeof(*row_col) * 2);
	r = 0;
	while (r < 9)
	{
		c = 0;
		while (c < 9)
		{
			if ((*b)[r][c] == '.')
			{
				(*b)[r][c] = v;
				row_col[0] = r;
				row_col[1] = c;
				return (row_col);
			}
			c++;
		}
		r++;
	}
	return (row_col);
}

char	**copy(char **b)
{
	char	**b_copy;
	int		r;
	int		c;

	b_copy = (char **)malloc(sizeof(*b_copy) * 9);
	r = 0;
	while (r < 9)
	{
		b_copy[r] = (char *)malloc(sizeof(*b_copy[r]) * 10);
		c = 0;
		while (c < 9)
		{
			b_copy[r][c] = b[r][c];
			c++;
		}
		b_copy[r][c] = '\0';
		r++;
	}
	return (b_copy);
}
