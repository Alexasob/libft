/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 04:14:31 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/17 07:24:18 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/* #include <stdio.h>
int main ()
{
	char c='L';
	c = ft_tolower(c);
	printf("%c",c);
} */