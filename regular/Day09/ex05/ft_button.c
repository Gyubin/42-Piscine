/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 02:11:10 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 02:25:57 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (i > k)
			return (k);
		else
			return (i);
	}
	else
	{
		if (i > k)
			return (i);
		else if (j < k)
			return (j);
		else
			return (k);
	}
}
