/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylaurol <lylaurol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:21:07 by lylaurol          #+#    #+#             */
/*   Updated: 2024/06/05 08:57:14 by lylaurol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src)
{
    char *dst;
    size_t  s_len;

    s_len = ft_strlen(src);    
    dst = (char *)malloc(sizeof(char)*(s_len + 1));
    if(!dst)
        return (NULL);
    return (ft_memcpy(dst, src, (s_len + 1)));
}
