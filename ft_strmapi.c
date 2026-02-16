/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:58:08 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/15 21:51:41 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	funk(unsigned int num, char c)
{
	(void)num;
	if (c >='a' && c <='z')
		c -= 32;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (!f || !s)
		return (NULL) ;
		
	size_t  l;

	
	l = ft_strlen(s);
	char *ptr;
	unsigned int	i;
	
	i = 0;
	ptr = (char *)ft_calloc( l+1, sizeof(char));
	if (!ptr)
		return(NULL);

	while (s[i])
	{
		ptr[i]=f(i, s[i]);
		i++;
	}
	return(ptr);
}


#include <stdio.h>
int main()
{
	char dii[]= "selam meltemmmmmmmaaaaa";
	char *ptr;

	ptr =ft_strmapi(dii, funk);
	printf("%s", ptr);
	return 0;
}

