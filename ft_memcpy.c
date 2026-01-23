/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 01:04:03 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/23 15:37:12 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (n > i)
	{
		ptr[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/* 
#include <stdio.h>
int main()
{
	char dizi1[]="sa";
	char dizi2[2];
	ft_memcpy(dizi2,dizi1,sizeof(dizi1));
	printf("%s",dizi2);

} */