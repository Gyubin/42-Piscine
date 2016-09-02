/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:23:26 by gyson             #+#    #+#             */
/*   Updated: 2016/08/24 23:42:38 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (*begin_list)
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*ptr;

	if (ac == 1)
		return (0);
	i = 1;
	ptr = 0;
	while (i < ac)
	{
		ft_list_push_front(&ptr, av[i]);
		i++;
	}
	return (ptr);
}
