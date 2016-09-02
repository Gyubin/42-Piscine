/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:38:08 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 19:52:59 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_double(int num);

int		main(void)
{
	int i;
	int *result;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	result = ft_map(arr, 10, &ft_double);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}

int		ft_double(int num)
{
	return (num * 2);
}
