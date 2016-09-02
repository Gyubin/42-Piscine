/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 21:45:32 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 14:10:41 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	char	**board;
	int		*row_col;
	int		result;

	board = ft_make_board();
	if (!board[0] || !ft_check_size(board, &row_col)
			|| !(result = ft_check_all_rush(board)))
		ft_putstr("aucune\n");
	else
		ft_print_result(result, row_col[0], row_col[1]);
	return (0);
}
