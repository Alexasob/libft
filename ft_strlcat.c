/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:10:55 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/16 11:52:09 by asobolev         ###   ########.tr       */
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

#include<stdio.h>
int main()
{
	char dst[] = "merhaba ";
	char src[] = "dunya";
	int x = ft_strlcat(dst,src,46);
	printf("%d  = %s",x,dst);
}