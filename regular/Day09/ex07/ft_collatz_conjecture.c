/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 02:43:51 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 03:02:54 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (!(base % 2))
		base /= 2;
	else
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}
