/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 00:24:59 by gyson             #+#    #+#             */
/*   Updated: 2016/08/16 01:56:14 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str, char *to_find)
{
	int result;

	while (*str == *to_find)
	{
		str++;
		to_find++;
	}
	return (!*to_find ? 1 : 0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	while (*str)
	{
		if (check(str, to_find))
			return (str);
		str++;
	}
	return (char *)0;
}
