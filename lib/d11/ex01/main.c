/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:54:18 by gyson             #+#    #+#             */
/*   Updated: 2016/08/24 23:10:36 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../gyson11/ex00/ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*ptr;

	ptr = 0;
	ft_list_push_back(&ptr, "aaa");
	ft_list_push_back(&ptr, "bbb");
	ft_list_push_back(&ptr, "ccc");
	ft_list_push_back(&ptr, "ddd");
	ft_list_push_back(&ptr, "eee");
	ft_list_push_back(&ptr, "fff");
	while (ptr)
	{
		printf("%s\n", (char *)(ptr->data));
		ptr = ptr->next;
	}
	return (0);
}
