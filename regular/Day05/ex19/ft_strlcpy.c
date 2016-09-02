/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:33:25 by gyson             #+#    #+#             */
/*   Updated: 2016/08/16 22:44:12 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	int				i;

	while (src[src_size])
		src_size++;
	if (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
		src_size = 0;
	}
	return (src_size);
}
