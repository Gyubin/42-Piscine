/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 20:52:13 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 22:33:25 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		eval_expr(char *str)
{
	char	**e;
	int		*number;
	char	*operator;
	int		size;
	int		i;
	int		j;

	e = ft_split_whitespaces(str);
	size = 0;
	while (e[size])
		size++;
	number = (int *)malloc(sizeof(int) * size);
	operator = (char *)malloc(sizeof(char) * (size + 1));
	operator[0] = '\0';
	number[0] = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		if (e[i][0] == '+' || e[i][0] == '*' || e[i][0] == '/'
				|| e[i][0] == '-' || e[i][0] == '%')
		{
			if (!op_a_is_first(operator[j], e[i][0]))
			{
				if (!operator[j])
					operator[j] = e[i][0];
				else
					operator[++j] = e[i][0];
			}
			else
			{
				
			}
		}
		else
		{
			if (!numbers)
		}
		i++;
	}
}

int		op_a_is_first(char a, char b)
{
	if (a == '\0')
		return (0);
	if (a == '+' || a == '-')
	{
		if (!(b == '+' || b == '-'))
			return (0);
		else
			return (1);
	}
	else
	{
		return (1);
	}
}

int		pop_number(int *arr)
{

}

char	pop_op(char *op)
{

}
