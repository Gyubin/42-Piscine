/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 21:05:16 by gyson             #+#    #+#             */
/*   Updated: 2016/08/14 03:36:09 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g_cnt = 0;
int g_arr[8] = {0, 0, 0, 0, 0, 0, 0, 0};

int		my_abs(int n)
{
	return (n >= 0 ? n : n * -1);
}

int		check(int cur)
{
	int i;

	i = 0;
	while (i < cur)
	{
		if (g_arr[i] == g_arr[cur] || cur - i == my_abs(g_arr[cur] - g_arr[i]))
			return (0);
		i++;
	}
	return (1);
}

void	print_arr(int *g_arr)
{
	int i;

	i = 0;
	while (i < 8)
	{
		printf("%d ", g_arr[i]);
		i++;
	}
	printf("\n");
}

void	ft_find(int cur)
{
	int i;

	if (cur == 8)
	{
		g_cnt++;
		return ;
	}
	i = 0;
	while (i < 8)
	{
		g_arr[cur] = i;
		if (check(cur))
			ft_find(cur + 1);
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	ft_find(0);
	return (g_cnt);
}

int		main(void)
{
	printf("%d\n", ft_eight_queens_puzzle());
	return (0);
}
