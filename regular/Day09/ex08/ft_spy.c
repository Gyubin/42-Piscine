/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 03:03:45 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 16:20:26 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_detect(char *whole, char *piece)
{
	int i;
	int j;

	i = 0;
	while (whole[i])
	{
		j = 0;
		while (whole[i + j] == piece[j] && piece[j])
			j++;
		if (!piece[j])
		{
			if (i == 0)
				return (1);
			else if (whole[i - 1] == ' '
					|| whole[i - 1] == '\t'
					|| whole[i - 1] == '\n')
				return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	ft_find_spy(int argc, char **argv)
{
	int		i;
	int		j;
	char	str[3][10] = {"president", "attack", "powers"};

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < 3)
		{
			if (ft_detect(ft_lowercase(argv[i]), str[j]))
			{
				ft_putstr("Alert!!!\n");
				return ;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_find_spy(argc, argv);
	return (0);
}
