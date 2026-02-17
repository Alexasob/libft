/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 01:19:42 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/17 14:43:32 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

//  #include  <stdio.h>
// int main()
// {
// 	char dest[] = "";
// 	ft_memmove(dest +1 , dest,5);
// 	printf("%s",dest );
// 	printf("%s\n", (dest + 0));
// }
//	0	1	2	3	4	5
//	f	a	t	f	a  \t   i h  0    src
//
// while()
// {
// 	dst[5] = src[5];
//				f
// 	dst[4] = src[4];
// 	dst[3] = src[3];
// 0 1 2 3 4
// a b c d /0 dest
// b c d /0 /0 sorce
// 0 1 2 3  4