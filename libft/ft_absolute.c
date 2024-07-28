/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylaurol <lylaurol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 07:28:19 by lylaurol          #+#    #+#             */
/*   Updated: 2024/07/27 05:43:09 by lylaurol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_absolute(long long value, int *minus)
{
	if (value < 0)
	{
		value = -value;
		*minus = 0;
	}
	return (value);
}
