/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 04:47:52 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/23 15:47:54 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (n != i)
	{
		ft_putchar_fd(a[i], 1);
		a[i++] = (unsigned char)c;
	}
	return (s);
}

/* #include <stdio.h>
int main()
{
	char dizi[]="1,2,3,4,5,6,7,8,9,";
	
	ft_memset(dizi,'1',5);
	printf("%s",dizi);
}
// memset byte byte yazmalı o yuzden char kullanıyoruz  int(4 byt) char (1 byt )
cast  geçiçi bir işlem belleğe atamzsan kayboluyr */ 