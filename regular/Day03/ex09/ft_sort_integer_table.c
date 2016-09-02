/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 22:33:32 by gyson             #+#    #+#             */
/*   Updated: 2016/08/12 23:06:28 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int flag;
	int tmp;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = tmp;
				flag = 1;
			}
			i++;
		}
	}
}
