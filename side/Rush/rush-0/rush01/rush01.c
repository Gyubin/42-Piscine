/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 00:28:22 by vbut              #+#    #+#             */
/*   Updated: 2016/08/15 00:28:28 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	qwe(int ix, int iy, int x, int y)
{
	if (ix == 1 && iy == 1)
		ft_putchar('/');
	else if ((ix == 1 && iy == y) || (ix == x && iy == 1))
		ft_putchar('\\');
	else if (ix == x && iy == y)
		ft_putchar('/');
	else if (ix == 1 || ix == x)
		ft_putchar('*');
	else if (iy == 1 || iy == y)
		ft_putchar('*');
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
