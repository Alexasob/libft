/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 04:41:30 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:48:58 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*start;
	char	*ptr;

	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
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
