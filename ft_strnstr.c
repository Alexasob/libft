/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:05:16 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:49:45 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0 || *little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
			j = j + 1;
		if (little[j] == 0)
			return ((char *)big + i);
		i = i + 1;
	}
	return (NULL);
}
