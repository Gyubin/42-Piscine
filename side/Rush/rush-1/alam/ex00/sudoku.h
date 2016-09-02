/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 00:12:05 by alam              #+#    #+#             */
/*   Updated: 2016/08/21 00:12:07 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include "sudokucheck.h"
# include "sudokuprint.h"

int	find_empty_cell(int **grid, int *row, int *col);

int	sudoku(int **grid);

#endif
