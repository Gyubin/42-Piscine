/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkomarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 12:51:26 by lkomarov          #+#    #+#             */
/*   Updated: 2016/08/27 21:06:24 by lkomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	ix = 1;
	iy = 1;
	while (iy <= y)
	{
		while (ix <= x)
		{
			if ((ix == 1 || ix == x) && (iy == 1 || iy == y))
				ft_putchar('o');
			else if (ix == 1 || ix == x)
				ft_putchar('|');
			else if (iy == 1 || iy == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			ix++;
		}
		iy++;
		ft_putchar('\n');
		ix = 1;
	}
}
