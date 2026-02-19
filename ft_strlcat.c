/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:10:55 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:49:13 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	full_dest;
	size_t	full_src;

	full_dest = ft_strlen(dst);
	full_src = ft_strlen(src);
	if (size <= full_dest)
		return (size + full_src);
	i = 0;
	while (src[i] && full_dest + i < size - 1)
	{
		dst[full_dest + i] = src[i];
		i++;
	}
	dst[full_dest + i] = '\0';
	return (full_dest + full_src);
}
