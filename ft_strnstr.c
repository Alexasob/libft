/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:00:35 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/10 12:17:37 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == '\0')
		return ((char *)big);
	size_t SA = 0;
	size_t SO = 0;
	char *start;
	size_t Count =0;

	while (1)
	{
		start = 0;
		while (big[SO] != little [SA] )
		{
			SO++;
			Count++;
		}
		if (Count >= len)
			return (NULL);
		if (big[SO] == little [SA])
			start = (char *)big+SO;
		while (big[SO] == little [SA])
		{
			Count++;
			SO++;
			SA++;
			if (little[SA] == '\0')
				return ((char *)start);
			if (Count >= len)
				return (NULL);
		}
		if (big[SO] != little[SA] && start != 0)
		{
			SA = 0;
		}
	}
}
