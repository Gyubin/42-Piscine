/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 22:22:59 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 18:45:47 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *str;

	str = "abc lsk 67897869786 786976 34563456 345634563456 djfl  786978969769&^%^&#^#$%#^$%#^%$@78 675675876 5675867567856 6568756lsdjlfskj dfl  lskdjflskdjflajsfl";
	// printf("input: ");
	// scanf("%s", str);
	printf("orig: %s\n", strdup(str));
	printf("mine: %s\n", ft_strdup(str));
	return (0);
}
