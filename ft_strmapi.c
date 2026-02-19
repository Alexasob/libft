/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:58:08 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:49:33 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			l;
	char			*ptr;
	unsigned int	i;

	if (!f || !s)
		return (NULL);
	l = ft_strlen(s);
	i = 0;
	ptr = (char *)ft_calloc (l + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
