/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_box.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 22:07:33 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 20:27:25 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	**ft_make_box(void)
{
	char	**result;
	int		row_cnt;
	int		col_cnt;

	row_cnt = ft_calculate_row_cnt();
	col_cnt = ft_calculate_col_cnt(row_cnt);
	result = get_box(row_cnt, col_cnt);
	return (result);
}

char	**get_box(int row_cnt, int col_cnt)
{
	char	**result;
	int		fd;
	char	buf;
	int		i;
	int		j;

	fd = open("example_file", O_RDONLY);
	lseek(fd, get_digit(row_cnt) + 4, SEEK_SET);
	result = (char **)malloc(sizeof(*result) * (row_cnt + 1));
	i = 0;
	while (i < row_cnt)
	{
		result[i] = (char *)malloc(sizeof(char) * (col_cnt + 1));
		read(fd, &buf, 1);
		j = 0;
		while(buf != '\n')
		{
			result[i][j] = buf;
			j++;
			read(fd, &buf, 1);
		}
		result[i][j] = '\0';
		i++;
	}
	result[i] = 0;
	return (result);
}

int		ft_calculate_row_cnt(void)
{
	char	buf[1000];
	int		i;
	int		fd;

	fd = open("example_file", O_RDONLY);
	i = 0;
	read(fd, &buf[i], 1);
	while (buf[i] != '.')
	{
		i++;
		read(fd, &buf[i], 1);
	}
	buf[i] = '\0';
	close(fd);
	return (ft_atoi(buf));
}

int		ft_calculate_col_cnt(int row_cnt)
{
	char	buf;
	int		cnt;
	int		fd;

	fd = open("example_file", O_RDONLY);
	cnt = 0;
	lseek(fd, get_digit(row_cnt) + 4, SEEK_SET);
	read(fd, &buf, 1);
	while (buf != '\n')
	{
		cnt++;
		read(fd, &buf, 1);
	}
	close(fd);
	return (cnt);
}

char	*get_marks(void)
{
	int		i;
	int		fd;
	char	buf;
	char	*marks;

	marks = (char *)malloc(sizeof(char) * 3);
	fd = open("example_file", O_RDONLY);
	read(fd, &buf, 1);
	while (buf <= '9' && buf >= '0')
		read(fd, &buf, 1);
	i = 0;
	marks[i] = buf;
	while (buf != '\n')
	{
		read(fd, &buf, 1);
		i++;
		marks[i] = buf;
	}
	return (marks);
}
