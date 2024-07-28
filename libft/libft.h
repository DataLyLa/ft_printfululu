/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylaurol <lylaurol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 07:43:17 by lylaurol          #+#    #+#             */
/*   Updated: 2024/07/28 06:14:22 by lylaurol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putc(char c);
int		ft_puts(char *s);
void	*ft_calloc(size_t nmemb, size_t siz);
void	*ft_memset(void *s, int c, size_t n);
int		ft_absolute(long long value, int *minus);
int num_len(int n);
char *ft_strdup(const char *src);
size_t ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
#endif