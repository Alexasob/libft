/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 23:20:42 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/14 04:47:55 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{

	while ( *s1 && n && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
		n--;
	}
	if(n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);

}
/* #include <stdio.h>
int main()
{
	char s1[]="a";
	char s2[]="";
	
	printf("%d",ft_strncmp(s1,s2,0));
} */