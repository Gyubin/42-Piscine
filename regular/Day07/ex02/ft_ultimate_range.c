/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 22:28:34 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 23:04:47 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = max - min;
	if (size <= 0)
		return ((int)NULL);
	*range = (int *)malloc(sizeof(**range) * (size));
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	free(*range);
	return (size);
}
