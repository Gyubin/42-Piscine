/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_obstacle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aariyapi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 19:28:10 by aariyapi          #+#    #+#             */
/*   Updated: 2016/08/31 20:34:35 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		**get_obstacle(char **box, char *marks)
{
	int i;
	int j;
	int k;
	int **obs_arr;
	int row_cnt;

	row_cnt = ft_calculate_row_cnt();
	obs_arr = (int **)malloc(sizeof(*obs_arr) * 
			(row_cnt * ft_calculate_col_cnt(row_cnt) + 1)); 
	i = 0;
	k = 0;
	while (box[i])
	{
		j = 0;
		while (box[i][j])
		{
			if (box[i][j] == marks[1])
			{
				obs_arr[k] = (int *)malloc(sizeof(int) * 2);
				obs_arr[k][0] = i;
				obs_arr[k][1] = j;
				k++;
			}
			j++;
		}
		i++;
	}
	obs_arr[k] = 0;
	return (obs_arr);
}
