/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 04:21:14 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 05:47:20 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		x;
	long	val;

	val = n;
	x = 0;
	if (val < 0 || val == 0)
		x++;
	while (val)
	{
		val = val / 10;
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
	if (!str)
		return (NULL);
	str[x] = '\0';
	if (val < 0)
	{
		val *= -1;
	}
	x--;
	while (x >= 0)
	{
		str[x] = (val % 10) + '0';
		val = val / 10;
		x--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
