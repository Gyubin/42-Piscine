/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:59:27 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 18:46:04 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[20];
	int		i;

	if (nb == 0)
	{
		ft_putchar('0');
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
		str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}
