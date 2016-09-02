/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:52:24 by gyson             #+#    #+#             */
/*   Updated: 2016/08/14 23:04:06 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);
int		calculate_star_num(int size);
void	print_nth_floor(int n);
void	sastantua(int size);

int		main(void)
{
	int input;

	printf("size? ");
	scanf("%d", &input);
	sastantua(input);
	return (0);
}

void	sastantua(int size)
{
	int i;

	if (size <= 0)
		return ;
	i = 0;
	while (i < size)
	{
		print_nth_floor(i);
		i++;
	}
}

void	print_nth_floor(int n)
{
	int ground_len;
	int i;
	int j;
	int boundary;

	ground_len = calculate_star_num(n + 1) + 2;
	i = 0;
	while (i < n + 2) // nth-floor's stairs.
	{
		j = 0;
		while (j < ground_len) // row's every character which can be called column.
		{
			boundary = ground_len - (3 * n) - i - 1;
			if (j < boundary) // white space comes first.
				ft_putchar(' ');
			else if (j == boundary)
				ft_putchar('/');
			else if (j == boundary + (i + 1) * 2)
			{
				ft_putchar('\\');
				break;
			}
			else
				ft_putchar('*');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		calculate_star_num(int size)
{
	int result;

	if (size == 1)
	{
		result = 1;
	}
	else
	{
		result = (size % 2 ? size + 3 : size + 4);
		result += calculate_star_num(size - 1);
	}
	result += (size + 1) * 2;
	return (result);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
