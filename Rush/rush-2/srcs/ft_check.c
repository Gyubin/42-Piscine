/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 01:49:23 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 13:13:47 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		ft_check_all_rush(char **board)
{
	int result;

	result = 0;
	if (ft_check_ld_ru_rd(board, 'o', 'o', 'o')
			&& ft_check_lu_h_v(board, 'o', '-', '|'))
		result += 1;
	if (ft_check_ld_ru_rd(board, '\\', '\\', '/')
			&& ft_check_lu_h_v(board, '/', '*', '*'))
		result += 2;
	if (ft_check_ld_ru_rd(board, 'C', 'A', 'C')
			&& ft_check_lu_h_v(board, 'A', 'B', 'B'))
		result += 4;
	if (ft_check_ld_ru_rd(board, 'A', 'C', 'C')
			&& ft_check_lu_h_v(board, 'A', 'B', 'B'))
		result += 8;
	if (ft_check_ld_ru_rd(board, 'C', 'C', 'A')
			&& ft_check_lu_h_v(board, 'A', 'B', 'B'))
		result += 16;
	return (result);
}

void	ft_print_result(int result, int r, int c)
{
	int		flag;
	int		i;

	i = 0;
	flag = 0;
	while (result)
	{
		if (result & 1)
		{
			if (flag)
				ft_putstr(" || ");
			ft_putstr("[rush-0");
			ft_putchar(i + '0');
			ft_putstr("] [");
			ft_putnbr(c);
			ft_putstr("] [");
			ft_putnbr(r);
			ft_putstr("]");
			flag = 1;
		}
		result = result >> 1;
		i++;
	}
	ft_putchar('\n');
}
