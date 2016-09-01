/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:58:28 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 20:38:18 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_box(char **box)
{
	int i;

	i = 0;
	while (box[i])
	{
		ft_putstr(box[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_obs(int **arr)
{
	int i;

	i = 0;
	while (arr[i])
	{
		ft_putstr("x: ");
		ft_putnbr(arr[i][0]);
		ft_putstr(", y: ");
		ft_putnbr(arr[i][1]);
		ft_putchar('\n');
		i++;
	}
}
