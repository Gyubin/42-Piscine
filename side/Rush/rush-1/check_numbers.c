/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 02:49:14 by gyson             #+#    #+#             */
/*   Updated: 2016/08/21 14:44:07 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_valid_element(char **b)
{
	int r;
	int c;

	r = 0;
	while (r < 9)
	{
		c = 0;
		while (c < 9)
		{
			if (b[r][c] != '.')
				if (b[r][c] < '1' && b[r][c] > '9')
					return (0);
			c++;
		}
		r++;
	}
	return (1);
}

int		check_row(char *r)
{
	int sum;

	printf("ROW");
	sum = 0;
	while (*r)
		sum += *r++;
	printf(" %d\n", sum);
	return (sum == 477 ? 1 : 0);
}

int		check_col(char **b, int c)
{
	int i;
	int sum;

	printf("COLUMN\n");
	i = 0;
	sum = 0;
	while (i < 9)
		sum += b[i++][c];
	return (sum == 477 ? 1 : 0);
}

int		check_square(char **b, int r, int c)
{
	int i;
	int j;
	int sum;

	printf("SQUARE\n");
	sum = 0;
	i = r - 2;
	while (i <= r)
	{
		j = c - 2;
		while (j <= c)
			sum += b[i++][j++];
	}
	return (sum == 477 ? 1 : 0);
}

int		check_all(char **b, int r, int c)
{
	if (r == 2 || r == 5 || r == 8)
		if (c == 2 || c == 5 || c == 8)
			if (!check_square(b, r, c))
				return (0);
	if (r == 8)
		if (!check_col(b, c))
			return (0);
	if (c == 8)
		if (!check_row(b[r]))
			return (0);
	return (1);
}
