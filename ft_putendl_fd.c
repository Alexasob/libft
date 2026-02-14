/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 02:42:38 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/14 02:49:57 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd,"\n",1);
}

/* int main()
{
	char s[]="abcdef";
	ft_putendl_fd(s,1);
} */