/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 07:55:10 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/10 10:06:31 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;
	size_t len;
	char *strart;

	ptr = 0;
	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	ptr = malloc(len);
	strart = ptr; // neden böyle 
	if (!ptr)
		return(NULL);
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return(strart);
}
// #include <stdio.h>
// int main()
// {	char *p;
// 	char s1[]="abcde";
// 	char s2[]="fhgcz";
// 	p = ft_strjoin(s1,s2);
// 	printf("%s\n",p);
// 	printf("len1=%zu len2=%zu\n", ft_strlen(s1), ft_strlen(s2));

// 	free(p);
// }