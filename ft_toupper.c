/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 03:52:57 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/09 16:09:04 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 123)
		return (c - 32);
	return (c);
}

/* #include <stdio.h>
int main ()
{
	char c='?';
	c = ft_toupper(c);
	printf("%c",c);
} */