/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:36:36 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 23:16:45 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		ft_decimalize(char *nbr, char *base)
{
	int		result;
	int		digit;
	int		i;
	int		j;

	digit = ft_strlen(base);
	result = 0;
	i = 0;
	while (nbr[i])
	{
		j = 0;
		while (base[j])
		{
			if (nbr[i] == base[j])
			{
				result = (digit * result) + j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (result);
}

char	*ft_basify(int num, char *base_str)
{
	int		base_num;
	int		digit;
	char	*result;
	int		i;
	int		target;

	base_num = ft_strlen(base_str);
	target = num;
	digit = 0;
	while (target > 0)
	{
		digit++;
		target /= base_num;
	}
	result = (char *)malloc(sizeof(*result) * (digit + 1));
	i = digit - 1;
	while (i >= 0)
	{
		result[i] = base_str[num % base_num];
		num /= base_num;
		i--;
	}
	result[i] = '\0';
	free(result);
	return (result);
}

int		check_base(char *base)
{
	int i;
	int base_num;

	base_num = 0;
	while (base[base_num])
	{
		if (base[base_num] == '+' || base[base_num] == '-')
			return (0);
		i = 0;
		while (i < base_num)
		{
			if (base[base_num] == base[i])
				return (0);
			i++;
		}
		base_num++;
	}
	if (base_num < 2)
		return (0);
	return (base_num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		middleware;

	if (!*nbr || !check_base(base_from) || !check_base(base_to))
		return (NULL);
	middleware = ft_decimalize(nbr, base_from);
	return (ft_basify(middleware, base_to));
}
