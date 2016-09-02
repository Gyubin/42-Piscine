/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 20:09:54 by gyson             #+#    #+#             */
/*   Updated: 2016/08/17 20:59:25 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_params(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
void	ft_bubble_sort(int argc, char ***ptr);

int		main(int argc, char **argv)
{
	ft_bubble_sort(argc, &argv);
	ft_print_params(argc, argv);
	return (0);
}

void	ft_bubble_sort(int argc, char ***ptr)
{
	int		i;
	int		flag;
	char	*tmp_ptr;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp((*ptr)[i], (*ptr)[i + 1]) > 0)
			{
				tmp_ptr = (*ptr)[i];
				(*ptr)[i] = (*ptr)[i + 1];
				(*ptr)[i + 1] = tmp_ptr;
				flag = 1;
			}
			i++;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}
