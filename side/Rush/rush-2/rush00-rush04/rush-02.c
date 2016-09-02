/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 00:28:36 by vbut              #+#    #+#             */
/*   Updated: 2016/08/15 00:28:42 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	qwe(int ix, int iy, int x, int y)
{
	if ((ix == 1 && iy == 1) || (ix == x && iy == 1))
		ft_putchar('A');
	else if ((ix == 1 && iy == y) || (ix == x && iy == y))
		ft_putchar('C');
	else if (ix == 1 || ix == x)
		ft_putchar('B');
	else if (iy == 1 || iy == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

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
			qwe(ix, iy, x, y);
			ix++;
		}
		iy++;
		ft_putchar('\n');
		ix = 1;
	}
}
