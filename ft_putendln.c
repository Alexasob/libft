/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendln.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:02:18 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/10 15:25:21 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr(s, fd);
	write(fd,'\n',1);
}

int main()
{
	char s[]="abcdef";
	ft_putendl_fd(s,1);
}