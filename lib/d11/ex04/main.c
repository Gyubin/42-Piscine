/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 23:11:34 by gyson             #+#    #+#             */
/*   Updated: 2016/08/24 23:27:22 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../gyson11/ex00/ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);

int		main(void)
{
	t_list	*ptr;

	ptr = 0;
	ft_list_push_front(&ptr, "aaa");
	ft_list_push_front(&ptr, "bbb");
	ft_list_push_front(&ptr, "ccc");
	ft_list_push_front(&ptr, "ddd");
	ft_list_push_front(&ptr, "eee");
	ft_list_push_front(&ptr, "fff");
	printf("%s\n", (char *)(ft_list_last(ptr)->data));
	return (0);
}
