/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:46:54 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/11 03:18:54 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *ptr;
	int Start;
	int end;
	i = 0;
	Start = 0;
	end = ft_strlen(s1);
	
	while (s1[Start] && ft_strchr(set,s1[Start]))
	{
		Start++;
	}
	while (end > Start && ft_strchr(set,s1[end-1]))
	{
		end--;
	}
	ptr = malloc((end - Start)+1);
	if (!ptr)
		return (NULL);
	while (Start < end)
		ptr[i++] = s1[Start++];
	ptr[i] = '\0';
	return(ptr);
	
}

#include <stdio.h>
int main ()
{
	char *b="xxxalexxxx";
	char *c=ft_strtrim(b,"xw");
	printf("%s", c);
	free(c);
}