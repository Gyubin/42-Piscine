/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:47:36 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 22:55:32 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_CHECK_H
# define __FT_CHECK_H

int		is_operator(char *str);
int		is_number(char *str);
int		check_invalid_arguments(char **argv);
int		check_argc_count(int argc);
int		check_all(int argc, char **argv);

#endif
