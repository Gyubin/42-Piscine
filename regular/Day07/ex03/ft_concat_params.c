/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 22:50:15 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 23:06:03 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int		ft_strlen_all(int argc, char **argv)
{
	int len;
	int i;

	len = 0;
	i = 1;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*str;

	if (argc == 1)
		return (NULL);
	len = ft_strlen_all(argc, argv);
	str = (char *)malloc(sizeof(*str) * (len + argc - 1));
	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		str[k++] = '\n';
		i++;
	}
	str[k - 1] = '\0';
	free(str);
	return (str);
}
