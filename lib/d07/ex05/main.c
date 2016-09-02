/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 00:13:09 by gyson             #+#    #+#             */
/*   Updated: 2016/08/20 23:21:41 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(void)
{
	char **arr;
	char *str;
	
	str = "zz kdsjlfk sdlkjf slkdj flklskd fl jslakjs f  ";
	arr = ft_split_whitespaces(str);
	ft_print_words_tables(arr);
	return (0);
}
