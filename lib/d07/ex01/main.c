/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:55:03 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 09:42:35 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int min, max;
	int *arr;
	int i;
	
	scanf("%d %d", &min, &max);
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
