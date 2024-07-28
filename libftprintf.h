/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylaurol <lylaurol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 05:03:29 by lylaurol          #+#    #+#             */
/*   Updated: 2024/07/25 05:03:29 by lylaurol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdio.h>

# define NS_10 "0123456789"
# define BASE10 10
# define LNS_16 "0123456789abcdef"
# define UNS_16 "0123456789ABCDEF"
# define BASE16 16
# define C char
# define I int
# define ULI unsigned long long int
# define UI unsigned int

typedef enum s_type
{
	TYPE_I,
	TYPE_ULI,
	TYPE_UI
}	t_type;

int		ft_printf(const char *format, ...);
int		print_base(long long value, t_type type, int base, char *s_base);
#endif