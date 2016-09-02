/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:48:13 by gyson             #+#    #+#             */
/*   Updated: 2016/08/18 19:35:08 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour % 12, (hour + 1) % 12);
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
