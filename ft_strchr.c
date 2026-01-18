/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 05:45:21 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/18 10:33:09 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((char *)s);
}

/* #include <stdio.h>
int main()
{
	char dizi[]="unooynamak";
	char c='m';
	
	printf("%s",ft_strchr(dizi,c));
} */