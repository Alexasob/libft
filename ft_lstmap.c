/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 03:30:14 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/19 06:27:50 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newn;
	t_list	*newl;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newl = NULL;
	while (lst)
	{
		content = f(lst->content);
		newn = ft_lstnew(content);
		if (!newn)
		{
			del(content);
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, newn);
		lst = lst->next;
	}
	return (newl);
}
