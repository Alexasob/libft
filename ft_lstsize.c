/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:39:13 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/16 10:51:22 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	int i;
	i = 1;
		
	while (lst->next != NULL)
	{
		lst = lst->next;		
		i++;
	}
	return (i);
}