/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:40:56 by gyson             #+#    #+#             */
/*   Updated: 2016/08/21 22:59:10 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int i;
	int j;

	printf("============\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	i = 0;
	j = 0;
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
	while (s1[i] == s2[j] && s2[j])
	{
		printf("second: find character: %c %c\n", s1[i], s2[j]);
		i++;
		j++;
	}
	if (!s2[j])
	{
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
	char *str1 = "abcde fg azabc heyhi jk";
	char *str2 = "*zabc hey";

	printf("%d\n", match(str1, str2));
	return (0);
}
