/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 03:05:39 by asobolev          #+#    #+#             */
/*   Updated: 2026/01/14 04:52:24 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main ()
{
	int dizi[]={1,2,3,4,5,6,};
	ft_bzero(dizi,2);
	printf("%s",dizi);
}*/