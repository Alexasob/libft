/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:24:59 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 06:13:38 by asobolev         ###   ########.fr       */
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
		ft_lstdelone(*lst, del);
		*lst = tempr;
	}
}
