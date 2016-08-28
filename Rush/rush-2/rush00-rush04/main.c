/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkomarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 21:43:16 by lkomarov          #+#    #+#             */
/*   Updated: 2016/08/28 13:48:03 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str);
void rush(int x, int y);

int     main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		if (a > 0 && b > 0)
			rush(a, b);
	}
	return (0);
}
