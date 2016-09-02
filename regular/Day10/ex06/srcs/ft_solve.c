/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:01:35 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 23:18:09 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_solve.h"
#include "../includes/ft_print.h"

void	solve(char **argv)
{
	int a;
	int b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		ft_putnbr(a + b);
	else if (argv[2][0] == '-')
		ft_putnbr(a - b);
	else if (argv[2][0] == '*')
		ft_putnbr(a * b);
	else if (argv[2][0] == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnbr(a / b);
	}
	else if (argv[2][0] == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
			ft_putnbr(a % b);
	}
}

int		check(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == ' ')
		return (1);
	else if (*str == '\v' || *str == '\r' || *str == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int is_negative;
	int result;

	while (check(str))
		str++;
	is_negative = 0;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (is_negative ? result * -1 : result);
}
