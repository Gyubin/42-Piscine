/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:44:30 by gyson             #+#    #+#             */
/*   Updated: 2016/08/16 23:39:52 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base);
int		check_string(char *str, char *base);
int		check_all(char *str, char *base);
int		ft_str_is_printable(char *str);

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int base_num;
	int is_negative;
	int result;

	if (!(*str == '-' || *str == '+'))
		return (0);
	is_negative = 0;
	if (*str == '-')
		is_negative = 1;
	str++;
	base_num = check_all(str, base);
	if (base_num == 0)
		return (0);
	result = 0;
	while (*str)
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
				result += base_num * result + i;
			i++;
		}
		str++;
	}
	return (result);
}

int		check_all(char *str, char *base)
{
	int base_num;

	if (!*str || !check_string(str, base))
		return (0);
	base_num = check_base(base);
	if (base_num < 2)
		return (0);
	return (base_num);
}

int		check_string(char *str, char *base)
{
	int i;
	int cnt;

	while (*str)
	{
		i = 0;
		cnt = 0;
		while (base[i])
		{
			if (*str == base[i])
			{
				cnt++;
				break ;
			}
			i++;
		}
		if (cnt == 0)
			return (0);
		str++;
	}
	return (1);
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
