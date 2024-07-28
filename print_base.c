/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylaurol <lylaurol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 04:33:40 by lylaurol          #+#    #+#             */
/*   Updated: 2024/07/28 07:27:04 by lylaurol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	print_base(long long value, t_type type, int base, char *s_base)
{
	long long	num;
	char		*s;
	int			len;
	// int minus;
	int			tmp = 0;

	// minus = 0;
	printf("C'est icicicicici\n\n");
	printf("\nbase : %s, %i\n", s_base, base);
	num = value;
	// num = ft_absolute((long long) value, &minus);
	// if (type == TYPE_I && minus == 1)
	// 	ft_putc('-');
	// else 
	// 	minus = 0;
	// ft_add_formatter(num, &minus, type);
	if (type == TYPE_I)
		printf("\nok\n");
	len = num_len(num);
	printf("\n len %i\n", len);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (0);
	tmp = len;
	printf("\ntmp - len %i", tmp);
	while (num > 0 && tmp > 0)
	{
		ft_putc(s[tmp] = s_base[num % base]);
		printf("\nnum : %lli |%c| - %d -\n", num, s[tmp], tmp);
		tmp--;
		num /= base;
	}
	printf("\nfinal s : %s\n", s);
	// ft_puts(s);
	printf("\nfinal s2 : %s\n", s);
	return (len);
}
