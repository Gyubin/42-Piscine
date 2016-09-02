/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 00:13:09 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 09:33:27 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	int i;
	char **arr;
	char *str;
	
	str = "  zz aaaaa  aslkdsjdfayyyyyyiiiiiiiiiiiiiiiiiiiiiiiiiiiiyyja  aa  a  bbb cc   dd  111 222 333  44 5   ";
	arr = ft_split_whitespaces(str);
	i = 0;
	while (i < 13)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
