/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 00:55:22 by gyson             #+#    #+#             */
/*   Updated: 2016/08/21 14:20:08 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	**solve_sudoku(char **argv);
void	print_sudoku(char **argv);
int		check_valid_element(char **b);
char	**make_board(char **argv);

int		main(int argc, char **argv)
{
	char **board;

	board = make_board(argv);
	if (argc != 10 || !check_valid_element(board))
		return (0);
	argv = solve_sudoku(board);
	print_sudoku(board);
	return (0);
}

char	**make_board(char **argv)
{
	char	**board;
	int		i;

	board = (char **)malloc(sizeof(*board) * 9);
	i = 0;
	while (i < 9)
	{
		board[i] = argv[i + 1];
		i++;
	}
	return (board);
}
