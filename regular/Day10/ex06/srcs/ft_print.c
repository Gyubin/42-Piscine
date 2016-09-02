/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:50:32 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 23:11:52 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_print.h"

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
	char	str[20];
	int		i;

	if (nb == 0)
	{
		ft_putstr("0\n");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	i = 0;
	while (nb)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	i--;
	while (i >= 0)
		ft_putchar(str[i--]);
	ft_putchar('\n');
}
