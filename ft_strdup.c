/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 04:41:30 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/10 06:29:11 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *start;
	char *ptr;
		ptr =malloc(ft_strlen(s)+1);
	if (!ptr)
		return(NULL);
	start = ptr;
	while (*s)
	{
		*ptr = *s;
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (start);
}

#include <stdio.h>
int main()
{
	char *a;

	a = ft_strdup("abcd");
	
	printf("%s",a);
}

