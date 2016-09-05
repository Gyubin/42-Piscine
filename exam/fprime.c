/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:57:20 by exam              #+#    #+#             */
/*   Updated: 2016/09/02 11:11:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_prime(int num);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_prime(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}

void	print_prime(int num)
{
	int i;
	int flag;

	if (num == 1)
	{
		printf("1");
		return ;
	}
	if (num <= 0)
		return ;
	flag = 0;
	i = 2;
	while (num != 1)
	{
		while(num % i == 0)
		{
			if (flag)
				printf("*");
			flag = 1;
			printf("%d", i);
			num /= i;
		}
		i++;
	}
}
