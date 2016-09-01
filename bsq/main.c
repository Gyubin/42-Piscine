/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 15:13:48 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 20:38:39 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	char	**box;
	char	*marks;
	int		**obs_arr;

	marks = get_marks();
	box = ft_make_box();
	obs_arr = get_obstacle(box, marks);
	ft_print_box(box);
	return (0);
}
