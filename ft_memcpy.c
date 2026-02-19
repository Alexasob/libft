/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 01:04:03 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:46:40 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)dest;
	while (n > i)
	{
		ptr[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
