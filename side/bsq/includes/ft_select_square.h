/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_square.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 21:32:33 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 22:36:21 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_SELECT_SQUARE_H
# define __FT_SELECT_SQUARE_H

#define MAX(a,b) (((a)>(b))?(a):(b))
# include <stdlib.h>

int		*ft_select_square(int **obs_arr, int *row_col);
int		*init_constraints(int **obs_arr, int p);
int		*check_four_directions(int *points, int *constraints, int *row_col);
int		get_size(int top, int bottom, int right, int left);
int		ft_max(int a, int b, int c, int d);

#endif
