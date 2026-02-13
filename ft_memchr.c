/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:44:00 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/11 13:13:52 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a;
	a = (unsigned char *)s;
	size_t i;
	i = 0;
	
	while (*a && i < n)
	{
		if (*a == c)
			return ((char *)s);
		a++;
		i++;
	}
	return ((char *)s);
}
int main ()
{
	char str[]="asdfghjkl";
	ft_memchr(str,'s',2);
}
