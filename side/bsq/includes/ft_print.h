/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 15:05:17 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 20:38:59 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINT_H
# define __FT_PRINT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int num);
void	ft_print_box(char **box);
void	ft_print_obs(int **arr);

#endif
