/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:09:48 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 22:28:49 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (result <= 0)
			return (is_negative ? 0 : -1);
		str++;
	}
	return (is_negative ? result * -1 : result);
}
