/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 23:45:52 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/10 03:50:19 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*p = s;

	while (*p++)
		;
	return (p - s - 1);
}
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char dizii[]="keremnaber la";
	printf("%zu",ft_strlen(dizii));
}