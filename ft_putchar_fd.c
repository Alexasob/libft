/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:05:24 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/10 10:19:49 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

//fd nin içerikleri ve anlamları önemli
// fd, dosya tanımlayıcısı demek.
// İşletim sistemi her açılan dosya veya çıktı için bir sayı verir.
// Bu sayı, nereye yazacağını veya nereden okuyacağını işletim sistemine söyler.
// 1 ve 2 farkını biliyorum ama nerede bakacam ona bir bak 