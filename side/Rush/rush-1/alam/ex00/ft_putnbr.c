/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:07:40 by alam              #+#    #+#             */
/*   Updated: 2016/08/15 11:07:46 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"

int g_minflag = 0;

int		neg_check(int num)
{
	if (num < 0)
	{
		if (num == -2147483648)
		{
			g_minflag = 1;
			num++;
			ft_putchar('-');
			num *= -1;
		}
		else
		{
			ft_putchar('-');
			num *= -1;
		}
	}
	return (num);
}

void	print_loop(int i, char number[])
{
	int msd_found;

	msd_found = 0;
	while (i > 0)
	{
		if (((i - 1) == 0) && (msd_found == 0))
		{
			ft_putchar(number[i - 1]);
			i--;
		}
		else if ((number[i - 1] != '0') && (msd_found == 0))
		{
			msd_found = 1;
		}
		else if (msd_found)
		{
			ft_putchar(number[i - 1]);
			i--;
		}
		else
		{
			i--;
		}
	}
	return ;
}

void	ft_putnbr(int nb)
{
	char	number[10];
	int		i;
	int		j;
	int		msd_found;

	i = 10;
	j = 0;
	msd_found = 0;
	nb = neg_check(nb);
	while (j < 10)
	{
		number[j] = (nb % 10) + 48;
		nb /= 10;
		if (g_minflag)
		{
			number[0]++;
			g_minflag = 0;
		}
		j++;
	}
	print_loop(i, number);
	return ;
}
