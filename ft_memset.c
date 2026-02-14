/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 04:47:52 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/14 02:40:06 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (n != i)
		a[i++] = (unsigned char)c;
	return (s);
}

/* int main(int argc, char const *argv[])
{
	int i;

	ft_memset(&i, 255, 4);
	ft_memset(&i, 212, 1);
	
	printf("%d", i);
	return 0;
} */
