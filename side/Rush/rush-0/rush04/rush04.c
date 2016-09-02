/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:46:48 by gyson             #+#    #+#             */
/*   Updated: 2016/08/27 21:07:09 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush04(int x, int y)
{
	int r;

	r = 0;
	while (r < y)
	{
		if (r == 0)
			output1(x);
		else if (r == y - 1)
			output3(x);
		else
			output2(x);
		ft_putchar('\n');
		r++;
	}
}

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

void	output3(int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == j - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}
