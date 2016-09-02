/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:20:40 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 22:57:24 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_check.h"
#include "includes/ft_print.h"
#include "includes/ft_solve.h"

int		main(int argc, char **argv)
{
	if (!check_all(argc, argv))
		ft_putstr("0\n");
	else
		solve(argv);
	return (0);
}
