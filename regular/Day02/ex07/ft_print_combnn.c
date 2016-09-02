/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combnn.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 19:33:53 by gyson             #+#    #+#             */
/*   Updated: 2016/08/11 22:32:51 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb, int digit)
{
	int arr[1000];
	int i;

	i = -1;
	while (nb)
	{
		i++;
		arr[i] = nb % 10;
		nb /= 10;
	}
	if (i < digit)
	{
		while (digit - i - 1)
		{
			ft_putchar('0');
			digit--;
		}
	}
	while (i >= 0)
	{
		ft_putchar(arr[i] + 48);
		i--;
	}
}

int		is_payload(int target, int digit)
{
	if (digit == 1)
		return (target == 8 ? 1 : 0);
	else if (digit == 2)
		return (target == 78 ? 1 : 0);
	else if (digit == 3)
		return (target == 678 ? 1 : 0);
	else if (digit == 4)
		return (target == 5678 ? 1 : 0);
	else if (digit == 5)
		return (target == 45678 ? 1 : 0);
	else if (digit == 6)
		return (target == 345678 ? 1 : 0);
	else if (digit == 7)
		return (target == 2345678 ? 1 : 0);
	else
		return (target == 12345678 ? 1 : 0);
}

void	ft_recursive_combn(int cnt, int start, int payload, int digit)
{
	if (cnt > 0)
	{
		while (start < 10 - cnt)
		{
			ft_recursive_combn(cnt - 1, start + 1, payload * 10 + start, digit);
			start++;
		}
	}
	else
	{
		while (start < 10 - cnt)
		{
			ft_putnbr(payload, digit);
			ft_putchar(start + 48);
			start++;
			if (payload == 0 && start == 10 && digit != 1)
				;
			else if (!is_payload(payload, digit))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_print_combn(int n)
{
	ft_recursive_combn(n - 1, 0, 0, n - 1);
}
