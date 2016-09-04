/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 11:14:00 by exam              #+#    #+#             */
/*   Updated: 2016/09/02 11:41:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_digit(unsigned int value, int base)
{
	int digit;

	digit = 0;
	while (value)
	{
		digit++;
		value /= base;
	}
	return (digit);
}

char	*ft_itoa_base(int value, int base)
{
	char 			*result;
	unsigned int	num;
	int				digit;
	int				is_negative;
	int				i;
	int				tmp;

	if (value < 0)
	{
		num = -value;
		is_negative = 1;
	}
	else if (value == 0)
	{
		result = (char *)malloc(2);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	else
	{
		num = value;
		is_negative = 0;
	}
	
	digit = get_digit(num, base);
	i = 0;
	if (is_negative)
	{
		result = (char *)malloc(sizeof(*result) * (digit + 2));
		result[digit + 1] = '\0';
		result[i++] = '-';
	}
	else
	{
		result = (char *)malloc(sizeof(*result) * (digit + 1));
		result[digit--] = '\0';
	}
	while (digit >= i)
	{
		tmp = num % base;
		if (tmp >= 10)
			result[digit--] = tmp + 'A';
		else
			result[digit--] = tmp + '0';
		num /= base;
	}
	return (result);
}
