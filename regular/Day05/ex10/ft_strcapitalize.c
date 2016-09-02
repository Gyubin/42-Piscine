/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 03:19:40 by gyson             #+#    #+#             */
/*   Updated: 2016/08/16 03:56:12 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER 1
#define LOWER 2
#define NUMBER 3

int		is_word(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (UPPER);
	else if (c >= 'a' && c <= 'z')
		return (LOWER);
	else if (c >= '0' && c <= '9')
		return (NUMBER);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (is_word(str[0]) == LOWER)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!is_word(str[i - 1]) && is_word(str[i]) == LOWER)
			str[i] -= 32;
		else if (is_word(str[i - 1]) && is_word(str[i]) == UPPER)
			str[i] += 32;
		i++;
	}
	return (str);
}
