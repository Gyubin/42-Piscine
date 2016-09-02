/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:02:13 by gyson             #+#    #+#             */
/*   Updated: 2016/08/16 17:48:44 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_size;
	unsigned int dest_size;

	src_size = 0;
	while (*src)
	{
		src++;
		src_size++;
	}
	dest_size = 0;
	while (*dest)
	{
		dest++;
		dest_size++;
	}
	return (size >= dest_size + 1 ? dest_size + src_size : size + src_size);
}
