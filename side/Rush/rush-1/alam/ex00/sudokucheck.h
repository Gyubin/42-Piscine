/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokucheck.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alam <theandylam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:24:26 by alam              #+#    #+#             */
/*   Updated: 2016/08/20 23:24:28 by alam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKUCHECK_H
# define SUDOKUCHECK_H

int check_row(int **grid, int row, int number);
int check_col(int **grid, int col, int number);
int check_square(int **grid, int row, int col, int number);
int is_valid(int **grid, int row, int col, int number);

#endif
