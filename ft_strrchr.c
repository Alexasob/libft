/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 06:36:16 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/18 10:41:28 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return ((char *)&s[ft_strlen(s)]);
}

/* #include <stdio.h>
int main()
{
	char dizi[]="unooynamak";
	char c='p';
	
	printf("%s",ft_strrchr(dizi,c));
} */