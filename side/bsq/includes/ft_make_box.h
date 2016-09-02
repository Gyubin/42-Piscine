/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_box.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 22:15:32 by gyson             #+#    #+#             */
/*   Updated: 2016/08/31 20:04:04 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_MAKE_BOX_H
# define __FT_MAKE_BOX_H

# include <stdlib.h>
# include <unistd.h>

# include <fcntl.h>

char	**ft_make_box(void);
int		ft_calculate_col_cnt(int row_cnt);
int		ft_calculate_row_cnt(void);
char	**get_box(int row_cnt, int col_cnt);
char	*get_marks(void);

#endif
