/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 10:32:34 by gyson             #+#    #+#             */
/*   Updated: 2016/08/11 21:18:51 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_group_putchar(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (!(i == '9' && j == '8' && k == '9' && l == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char a[4];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '9' && !(a[0] == '9' && a[1] == '9'))
		{
			a[2] = (a[1] == '9' ? a[0] + 1 : a[0]);
			while (a[2] <= '9')
			{
				a[3] = (a[1] == '9' || a[0] != a[2] ? '0' : a[1] + 1);
				while (a[3] <= '9')
				{
					ft_group_putchar(a[0], a[1], a[2], a[3]);
					a[3]++;
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
