/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:10:14 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/28 17:27:48 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lenght;
	size_t	i;

	lenght = ft_strlen(src);
	if (size == 0)
	{
		return (lenght);
	}

	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';


	return (lenght);
}
