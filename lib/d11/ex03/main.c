/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 23:11:34 by gyson             #+#    #+#             */
/*   Updated: 2016/08/24 23:21:23 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../gyson11/ex00/ft_list.h"
#include <stdio.h>

int		ft_list_size(t_list *begin_list);

int		main(void)
{
	t_list	*ptr;

	ptr = ft_create_elem("aaa");
	ptr->next = ft_create_elem("aaa");
	printf("%d\n", ft_list_size(ptr));
	return (0);
}
