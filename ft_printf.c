/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylaurol <lylaurol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 05:04:13 by lylaurol          #+#    #+#             */
/*   Updated: 2024/07/25 05:04:13 by lylaurol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>


static int	parse_format(const char *format, va_list args)
{
	int	count;

	if (!*format || !args)
		return (0);
	count = 0;
	if (*format == 'c')
		count += ft_putc(va_arg(args, I));
	if (*format == 's')
		count += ft_puts(va_arg(args, C *));
	if (*format == 'd' || *format == 'i')
		count += print_base(va_arg(args, I), TYPE_I, BASE10, NS_10);
	if (*format == 'u')
		count += print_base(va_arg(args, UI), TYPE_UI, BASE10, NS_10);
	if (*format == 'p')
		count += print_base(va_arg(args, ULI), TYPE_ULI, BASE16, LNS_16);
	if (*format == 'x' || *format == 'X')
		count += print_base(va_arg(args, UI), TYPE_UI, BASE16, LNS_16);
	if (*format == '%')
		count += ft_putc('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int i;
	char *buffer;

	i = -1;
	if (!*format)
		return (-1);
	buffer = ft_strdup(format);
	count = 0;
	va_start(args, format);

	while (buffer[++i])
	{
		if (buffer[i] == '%')
		{
			printf("\nbuffer printf  %c\n", buffer[i + 1]);
			count += parse_format(buffer + i + 1, args);
		}
		else
			count += ft_putc(*(buffer + i));
	}

	va_end(args);
	return (count);
}



int main(void)
{
	int n = 16;
	printf("%d", ft_printf("hello %s si si %i \ncount = ", "LYNdia\n", n));
	return (0);
}