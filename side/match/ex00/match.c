/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:40:56 by gyson             #+#    #+#             */
/*   Updated: 2016/08/21 23:40:36 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("============\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	while (s2[j] == '*' && s1[i])
	{
		printf("first: find character: %c %c\n", s1[i], s2[j]);
		if (s1[i] == s2[j + 1])
		{
			j++;
			break ;
		}
		i++;
	}
	while (s2[j] == '*' && s1[i])
	{
		printf("second: find character: %c %c\n", s1[i], s2[j]);
		if (s2[j] == '*' && s1[i] == s2[j + 1])
		{
			j++;
			continue;
		}
		i++;
		j++;
	}
	if (!s2[j])
	{
		printf("============\n");
		printf("============\n");
		printf("find it!\n");
		return (1);
	}
	else
	{
		if (*s1)
		{
			s1++;
			return (match(s1, s2));
		}
		return (0);
	}
}

int		main(void)
{
	char *str1 = "s  ldkfheyhi jk";
	char *str2 = "hey*";

	printf("%d\n", match(str1, str2));
	return (0);
}
