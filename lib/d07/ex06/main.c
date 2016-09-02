/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:36:01 by gyson             #+#    #+#             */
/*   Updated: 2016/08/19 14:39:35 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char *base_from = "0123456789";
	char *base_to = "01";
	char *nbr = "1112";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
