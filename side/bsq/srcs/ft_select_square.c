/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 21:20:03 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 23:22:35 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		*ft_select_square(int **obs_arr, int *row_col)
{
	int		*result;
	int		*constraints; /* top, right, bottom, left */
	int		i;

	i = 0;
	while (obs_arr[i])
	{
	}
	return (result);
}

int		*check_four_direction(int *points, int *cst, int *row_col)
{
	int upper;
	int lower;
	int left;
	int right;

	upper = get_size(cst[0], points[0], cst[1], cst[3]);
	lower = get_size(points[0], cst[2], cst[1], cst[3]);
	left = get_size(cst[0], cst[2], points[1], cst[3]);
	right = get_size(cst[0], cst[2], cst[1], points[1]);
	return (ft_max(upper, lower, left, right));
}

int		get_size(int top, int bottom, int right, int left)
{
	int w;
	int h;

	w = right - left;
	h = top - bottom;
	return (w <= h ? w : h);
}

int		ft_max(int a, int b, int c, int d)
{
	int tmp;
	tmp = MAX(a, b);
	tmp = MAX(tmp, c);
	tmp = MAX(tmp, d);
	return (tmp);
}
