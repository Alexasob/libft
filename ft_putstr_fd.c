/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:22:22 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/11 12:51:20 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	size_t i =  ft_strlen(s);
	write(fd, s, i);
}

#include <fcntl.h>

int main()
{
	int fd;
	ft_putstr_fd("alexcalisolmatilcaksin", 1);
	close (fd);
}