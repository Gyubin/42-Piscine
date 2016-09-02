/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 16:43:21 by gyson             #+#    #+#             */
/*   Updated: 2016/08/25 22:53:33 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"
#include "../includes/ft_print.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}
