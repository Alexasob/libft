/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 02:31:16 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/16 10:23:24 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *root;
	root = malloc(sizeof(t_list));
	if (!root)
		return (NULL);
	
	root->content = content;
	root->next = NULL;
	return(root);
}


int main ()
{
	char arr[] ="saalex";
	t_list *yeni = ft_lstnew(arr);
	printf("%s",yeni->content);
}
