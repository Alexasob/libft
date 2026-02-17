/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:24:59 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/17 14:39:21 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tempr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tempr = (*lst)->next;
		ft_lstdelone(*lst, free);
		*lst = tempr;
	}
}
