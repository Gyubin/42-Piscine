/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 02:27:42 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 02:42:25 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j])
		{
			free(factory[i][j]);
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
