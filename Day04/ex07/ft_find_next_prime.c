/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:43:10 by gyson             #+#    #+#             */
/*   Updated: 2016/08/13 21:03:47 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int flag;
	int i;

	if (nb < 2)
		return (0);
	flag = 1;
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			flag = 0;
			break ;
		}
		i++;
	}
	return (flag ? 1 : 0);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (-1);
}
