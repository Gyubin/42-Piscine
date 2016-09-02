/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 20:03:55 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 04:46:44 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argc--;
	while (argc > 0)
	{
		while (*argv[argc])
		{
			ft_putchar(*argv[argc]);
			argv[argc]++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
