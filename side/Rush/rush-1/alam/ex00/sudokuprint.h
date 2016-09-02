/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokuprint.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:34:26 by alam              #+#    #+#             */
/*   Updated: 2016/08/21 13:34:28 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKUPRINT_H
# define SUDOKUPRINT_H

# include <unistd.h>
# include "ft_putnbr.h"

void	ft_putchar(char input);

void	ft_putstr(char *str);

void	print_grid(int **grid);

#endif
