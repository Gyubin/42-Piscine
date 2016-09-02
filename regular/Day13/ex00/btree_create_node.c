/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 20:28:19 by gyson             #+#    #+#             */
/*   Updated: 2016/08/26 20:34:39 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree		tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->left = 0;
		tmp->right = 0;
		tmp->item = item;
	}
	return (tmp);
}
