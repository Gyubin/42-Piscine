/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:55:37 by gyson             #+#    #+#             */
/*   Updated: 2016/08/16 23:00:05 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);
int		check_base(char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		is_negative;
	int		base_num;
	char	result[10000];

	base_num = check_base(base);
	if (!base_num)
		return ;
	is_negative = 0;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr *= -1;
	}
	i = 0;
	while (nbr)
	{
		result[i] = base[nbr % base_num];
		i++;
		nbr /= base_num;
	}
	i--;
	if (is_negative)
		ft_putchar('-');
	while (i >= 0)
	{
		ft_putchar(result[i]);
		i--;
	}
}

int		check_base(char *base)
{
	int i;
	int base_num;

	if (!ft_str_is_printable(base))
		return (0);
	base_num = 0;
	while (base[base_num])
	{
		if (base[base_num] == '+' || base[base_num] == '-')
			return (0);
		i = 0;
		while (i < base_num)
		{
			if (base[base_num] == base[i])
				return (0);
			i++;
		}
		base_num++;
	}
	if (base_num < 2)
		return (0);
	return (base_num);
}

int		ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
