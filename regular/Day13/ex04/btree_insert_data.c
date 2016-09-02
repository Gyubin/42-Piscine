/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 22:25:16 by gyson             #+#    #+#             */
/*   Updated: 2016/08/26 23:25:09 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item, int (*f)(void *, void *))
{
	if (*root)
	{
		
		if (f((*root)->item, item) < 0)
			btree_insert_data(&((*root)->left), item, f);
		else
			btree_insert_data(&((*root)->right), item, f);
	}
}
