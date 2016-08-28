/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_common.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 02:49:59 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 13:16:36 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		ft_check_ld_ru_rd(char **board, char ld, char ru, char rd)
{
	int row;
	int col;
	int result;

	col = ft_strlen(board[0]);
	row = 0;
	while (board[row])
		row++;
	result = 1;
	if (row >= 2)
		result *= ft_check_left_corner(board[row - 1], ld);
	if (col >= 2)
		result *= ft_check_right_corner(board[0], col, ru);
	if (row >= 2 && col >= 2)
		result *= ft_check_right_corner(board[row - 1], col, rd);
	return (result);
}

int		ft_check_lu_h_v(char **board, int lu, int h, int v)
{
	int row;
	int col;
	int result;

	col = ft_strlen(board[0]);
	row = 0;
	while (board[row])
		row++;
	result = 1;
	result *= ft_check_left_corner(board[0], lu);
	result *= ft_check_border_center(board, h, v);
	return (result);
}

int		ft_check_left_corner(char *row, char c)
{
	return (row[0] == c ? 1 : 0);
}

int		ft_check_right_corner(char *row, int size, char c)
{
	return (row[size - 1] == c ? 1 : 0);
}

int		ft_check_border_center(char **board, char h, char v)
{
	int i;
	int j;
	int row;
	int col;

	col = ft_strlen(board[0]);
	row = 0;
	while (board[row])
		row++;
	i = 1;
	while (i < row - 1)
	{
		if (board[i][0] != v || board[i][col - 1] != v)
			return (0);
		j = 1;
		while (j < col - 1)
		{
			if (board[0][j] != h || board[row - 1][j] != h
					|| board[i][j] != ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
