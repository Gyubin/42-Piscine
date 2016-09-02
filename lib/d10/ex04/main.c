/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:53:56 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 20:23:53 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int (*f)(char *));
int		ft_check(char *str);

int		main(void)
{
	char **str_arr;

	str_arr = (char **)malloc(sizeof(*str_arr) * 5);
	str_arr[0] = "ambcdef";
	str_arr[1] = "mmmmmmmmm";
	str_arr[2] = "bcdefg";
	str_arr[3] = "llmllllll";;
	str_arr[4] = 0;
	printf("I found %d.\n", ft_count_if(str_arr, &ft_check));
	return (0);
}

int		ft_check(char *str)
{
	while (*str)
	{
		if (*str == 'm')
			return (1);
		str++;
	}
	return (0);
}
