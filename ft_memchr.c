/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:44:00 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/14 05:10:40 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*a == (unsigned char)c)
			return ((void *)(a));
		a++;
		i++;
	}
	return (NULL);
}
/* int main ()
{
	char str[]="asdfghjkl";
	ft_memchr(str,'s',2);
} */
