/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:12:14 by exam              #+#    #+#             */
/*   Updated: 2016/09/02 10:27:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	helper_func(unsigned char octet)
{
	if (octet >= 2)
	{
		helper_func(octet / 2);
		helper_func(octet % 2);
	}
	else
	{
		ft_putchar(octet + '0');
	}
}

void	print_bits(unsigned char octet)
{
	if (octet > 255)
		return ;
	else if (octet >= 128)
		;
	else if (octet >= 64)
		ft_putchar('0');
	else if (octet >= 32)
		ft_putstr("00");
	else if (octet >= 16)
		ft_putstr("000");
	else if (octet >= 8)
		ft_putstr("0000");
	else if (octet >= 4)
		ft_putstr("00000");
	else if (octet >= 2)
		ft_putstr("000000");
	else if (octet >= 0)
		ft_putstr("0000000");
	helper_func(octet);
}
