/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 22:27:59 by gyson             #+#    #+#             */
/*   Updated: 2016/08/17 22:45:28 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i, min, max;
	int *arr;

	printf("min max: ");
	scanf("%d %d", &min, &max);
	ft_ultimate_range(&arr, min, max);
	printf("arr: ");
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
