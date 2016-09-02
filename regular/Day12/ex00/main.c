/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 16:40:39 by gyson             #+#    #+#             */
/*   Updated: 2016/08/25 21:37:39 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_display_file.h"
#include "./includes/ft_print.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
			ft_puterror("File name missing.\n");
		else if (argc > 2)
			ft_puterror("Too many arguments.\n");
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
