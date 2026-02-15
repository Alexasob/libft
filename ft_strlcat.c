/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:10:55 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/14 05:35:18 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	full;
	char	*temp;

	temp = dst;
	i = 0;
	full = ft_strlen(dst);
	while (full != (size -1) && src[i])
	{
		while (src[i] != '\0')
		{
			dst[full++] = src[i++];
		}
		full++;
		dst [full] = '\0';
		return (ft_strlen(temp) + ft_strlen(src));
	}
	return (ft_strlen(temp) + ft_strlen(src));
}
