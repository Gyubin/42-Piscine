/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 19:47:21 by exam              #+#    #+#             */
/*   Updated: 2016/08/29 21:11:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_put_str_arr(char **str_arr)
{
	int i;

	i = 0;
	while (str_arr[i])
	{
		ft_putstr(str_arr[i]);
		ft_putchar(' ');
		i++;
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

int		is_sep_or_null(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c  == '\f'
			|| c == '\v' || c == '\r' || c == '\0')
		return (1);
	else
		return (0);
}

int		ft_get_word_cnt(char *str)
{
	int word_cnt;
	int i;

	word_cnt = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep_or_null(str[i]))
		{
			if (is_sep_or_null(str[i + 1]))
				word_cnt++;
		}
		i++;
	}
	return (word_cnt);
}

int		*get_word_len_arr(char *str, int word_cnt)
{
	int *word_len_arr;
	int e;
	int i;
	int cnt;

	word_len_arr = (int *)malloc(sizeof(*word_len_arr) * word_cnt);
	e = 0;
	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (!is_sep_or_null(str[i]))
		{
			cnt++;
			if (is_sep_or_null(str[i + 1]))
			{
				word_len_arr[e] = cnt;
				cnt = 0;
				e++;
			}
		}
		i++;
	}
	return (word_len_arr);
}

char	*get_word(char *str, int word_len, int num)
{
	int		i;
	int		mem;
	int		cnt;
	int		is_prev_sep;
	char	*result;

	i = 0;
	mem = 0;
	is_prev_sep = 1;
	cnt = 0;
	while (str[i])
	{
		if (!is_sep_or_null(str[i]))
		{
			if (is_prev_sep)
				mem = i;
			is_prev_sep = 0;
			if (is_sep_or_null(str[i + 1]))
			{
				cnt++;
				if (cnt == num)
					break ;
			}
		}
		else
		{
			is_prev_sep = 1;
		}
		i++;
	}
	result = (char *)malloc(sizeof(char) * (word_len + 1));
	i = 0;
	while (i < word_len)
	{
		result[i] = str[mem];
		i++;
		mem++;
	}
	result[i] = '\0';
	return (result);
}

void	ft_split_whitespaces(char *str)
{
	int		word_cnt;
	int		*word_len_arr;
	char	**str_arr;
	int		i;

	word_cnt = ft_get_word_cnt(str);
	word_len_arr = get_word_len_arr(str, word_cnt);
	str_arr = (char **)malloc(sizeof(*str_arr) * (word_cnt + 1));
	i = 0;
	while (i < word_cnt)
	{
		str_arr[i] = get_word(str, word_len_arr[i], i + 1);
		i++;
	}
	str_arr[i] = 0;
	i--;
	while (i > 0)
	{
		ft_putstr(str_arr[i--]);
		ft_putchar(' ');
	}
	ft_putstr(str_arr[0]);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_split_whitespaces(argv[1]);
	ft_putchar('\n');
	return (0);
}
