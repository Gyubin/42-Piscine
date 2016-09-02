/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 23:31:11 by gyson             #+#    #+#             */
/*   Updated: 2016/08/13 13:43:31 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
