/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 00:42:30 by gyson             #+#    #+#             */
/*   Updated: 2016/08/11 21:18:28 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char arr[3];

	arr[0] = '0';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_putchar(arr[0]);
				ft_putchar(arr[1]);
				ft_putchar(arr[2]);
				if (!(arr[0] == '7' && arr[1] == '8' && arr[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
