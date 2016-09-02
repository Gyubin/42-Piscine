/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:46:48 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 12:49:25 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	output1(int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == j - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	output2(int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (i == 0 || i == j - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int r;

	r = 0;
	while (r < y)
	{
		if (r == 0 || r == y - 1)
			output1(x);
		else
			output2(x);
		ft_putchar('\n');
		r++;
	}
}
