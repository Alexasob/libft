/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:10:55 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/09 17:15:19 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	full;

	i = 0;
	full = ft_strlen(dst);
	while (full != (size -1))
	{
		while (src[i] != '\0')
		{
			printf("CC");
			dst[full++] = src[i++];
		}
		full++;
		dst [full] = '\0';
		return (ft_strlen(dst) + ft_strlen(src));
		printf("dst");
	}
	return (ft_strlen(dst) + ft_strlen(src));
}

// #include <stdio.h>
// int main()
// {
// 	size_t size;
// 	char cuzdan1[20]="sel";
// 	char canta2[]="çok";
// 	printf("%zu",ft_strlcat(cuzdan1,canta2,20));
// }