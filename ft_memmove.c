/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 01:19:42 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/18 10:38:09 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	ft_memcpy(dest, src, n);
	return (dest);
}

/* #include  <stdio.h>
int main()
{
	char dest[30]="123456789";
	ft_memmove(dest+3,dest,7);
	printf("%s",dest);
} */