/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:11:58 by gyson             #+#    #+#             */
/*   Updated: 2016/08/12 23:27:14 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_pow(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int		result;
	int		digit;
	int		is_negative;

	is_negative = 0;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	digit = 0;
	while (*str <= '9' && *str >= '0')
	{
		digit++;
		str++;
	}
	str -= digit;
	result = 0;
	while (*str <= '9' && *str >= '0')
	{
		result += (*str - '0') * my_pow(10, digit - 1);
		digit--;
		str++;
	}
	return (is_negative ? result * -1 : result);
}
