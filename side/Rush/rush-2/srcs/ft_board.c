/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 01:29:24 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 14:08:04 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	**ft_make_board(void)
{
	char	buf;
	char	**board;
	int		i;
	int		j;

	i = 0;
	j = 0;
	board = (char **)malloc(sizeof(*board) * (MAX_ROW + 1));
	while (read(0, &buf, 1))
	{
		if (j == 0)
			board[i] = (char *)malloc(sizeof(char) * (MAX_ROW + 1));
		if (buf == '\n')
		{
			board[i++][j] = '\0';
			j = 0;
		}
		else
		{
			board[i][j++] = buf;
		}
	}
	board[i] = 0;
	return (board);
}

int		ft_check_size(char **board, int **row_col)
{
	int prev;
	int tmp;
	int row;

	prev = ft_strlen(board[0]);
	row = 1;
	while (board[row])
	{
		tmp = ft_strlen(board[row]);
		if (prev != tmp)
			return (0);
		prev = tmp;
		row++;
	}
	*row_col = (int *)malloc(sizeof(int) * 2);
	(*row_col)[0] = row;
	(*row_col)[1] = prev;
	return (1);
}
