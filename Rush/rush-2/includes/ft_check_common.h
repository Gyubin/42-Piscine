/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_common.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 02:49:47 by gyson             #+#    #+#             */
/*   Updated: 2016/08/28 13:16:06 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_CHECK_COMMON_H
# define __FT_CHECK_COMMON_H

int		ft_check_ld_ru_rd(char **board, char ld, char ru, char rd);
int		ft_check_lu_h_v(char **board, int lu, int h, int v);
int		ft_check_left_corner(char *row, char c);
int		ft_check_right_corner(char *row, int size, char c);
int		ft_check_border_center(char **board, char h, char v);

#endif
