/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 21:41:32 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 23:02:48 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*dest;

	src_size = 0;
	while (src[src_size])
		src_size++;
	dest = (char *)malloc(sizeof(*dest) * (src_size + 1));
	i = 0;
	while (i < src_size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	free(dest);
	return (dest);
}
