/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 23:11:34 by gyson             #+#    #+#             */
/*   Updated: 2016/08/24 23:40:12 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../gyson11/ex00/ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);

int		main(int argc, char **argv)
{
	t_list	*ptr;
	int i;

	i = 0;
	ptr = ft_list_push_params(argc, argv);
	while (ptr)
	{
		printf("%d, ", i++);
		printf("%s\n", (char *)(ptr->data));
		ptr = ptr->next;
	}
	return (0);
}
