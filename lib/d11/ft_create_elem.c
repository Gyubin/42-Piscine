/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:46:26 by gyson             #+#    #+#             */
/*   Updated: 2016/08/24 22:58:44 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../gyson11/ex00/ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(*tmp));
	if (tmp)
	{
		tmp->next = NULL;
		tmp->data = data;
	}
	return (tmp);
}
