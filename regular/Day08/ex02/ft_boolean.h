/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:27:22 by gyson             #+#    #+#             */
/*   Updated: 2016/08/23 03:14:55 by gyson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H
# define __FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) !(nbr % 2)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef int		t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
