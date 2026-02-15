/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 04:21:14 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/15 18:45:06 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	x;

	x = 0;
	if (n < 0 || n == 0)
		x++;
	while (n)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	long	val;
	char	*str;
	int		x;

	val = n;
	x = ft_count(val);
	str = malloc(sizeof(char) * (x + 1));
	str[x] = '\0';
	if (val < 0)
	{
		str[0] = '-';
		val *= -1;
	}
	x--;
	while (x >= 0 && str[x] != '-')
	{
		str[x] = (val % 10) + '0';
		val = val / 10;
		x--;
	}
	return (str);
}

/* #include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%s\n",ft_itoa(-3));
} */