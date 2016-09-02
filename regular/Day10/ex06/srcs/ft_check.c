/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:26:55 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 23:18:01 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_check.h"
#include "../includes/ft_solve.h"

int		check_all(int argc, char **argv)
{
	return (check_argc_count(argc) && check_invalid_arguments(argv));
}

int		check_argc_count(int argc)
{
	return (argc == 4);
}

int		check_invalid_arguments(char **argv)
{
	return (is_number(argv[1]) && is_number(argv[3]) && is_operator(argv[2]));
}

int		is_number(char *str)
{
	while (check(str))
		str++;
	if (*str == '-' || *str == '+')
		str++;
	if (*str <= '9' && *str >= '0')
		return (1);
	else
		return (0);
}

int		is_operator(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (i != 1)
		return (0);
	c = str[0];
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}
