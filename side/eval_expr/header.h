/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 20:45:17 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 22:12:48 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H
# define __HEADER_H
# include <unistd.h>
# include <stdlib.h>

int		eval_expr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);
int		ft_atoi(char *str);
int		op_a_is_first(char a, char b);

#endif
