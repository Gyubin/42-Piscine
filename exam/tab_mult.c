/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 19:28:30 by exam              #+#    #+#             */
/*   Updated: 2016/08/29 19:45:25 by exam             ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
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

int		ft_atoi(char *str)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int		main(int argc, char **argv)
{
	int num;
	int i;

	i = 1;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putchar(i + '0');
			ft_putstr(" x ");
			ft_putnbr(num);
			ft_putstr(" = ");
			ft_putnbr(i * num);
			ft_putchar('\n');
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
