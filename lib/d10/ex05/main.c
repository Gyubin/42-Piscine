/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:24:34 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 21:04:42 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));
int		ft_num_compare(int a, int b);

int		main(void)
{
	int a[10] = {1, 3, 5, 6, 7, 7, 7, 9 , 19, 19};
	int b[5] = {6, 5, 5, 7, 4};
	
	if (ft_is_sort(a, 10, &ft_num_compare))
		printf("a sorted!!!!!!!!!\n");
	else
		printf("a No!!!!!!!!!!!!!\n");

	if (ft_is_sort(b, 5, &ft_num_compare))
		printf("b sorted!!!!!!!!!\n");
	else
		printf("b No!!!!!!!!!!!!!\n");
	return (0);
}

int		ft_num_compare(int a, int b)
{
	return (a - b);
}
