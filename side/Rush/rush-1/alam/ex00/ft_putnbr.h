/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 14:01:13 by alam              #+#    #+#             */
/*   Updated: 2016/08/21 14:01:15 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTNBR_H
# define FT_PUTNBR_H

# include "sudokuprint.h"

int		neg_check(int num);

void	print_loop(int i, char number[]);

void	ft_putnbr(int nb);

#endif
