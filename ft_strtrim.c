/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:46:54 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:49:59 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*ptr;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end -1]))
	{
		end--;
	}
	ptr = malloc((end - start) + 1);
	if (!ptr)
		return (NULL);
	while (start < end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
