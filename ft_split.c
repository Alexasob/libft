/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:02:31 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/20 15:16:44 by asobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_wordcount(char const *s, char c)
{
	int	wordcount;

	wordcount = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			wordcount ++;
		while (*s && *s != c)
			s++;
	}
	return (wordcount);
}

static void	freeptr(char **ptr)
{
	int	i;

	if (!ptr)
		return ;
	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int	wordcount;
	int	i;
	int	j;
	char	**ptr;

	if (!s)
		return (NULL);
	wordcount = get_wordcount(s, c);
	i = 0;
	ptr = ft_calloc(wordcount + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i < wordcount)
	{
		while (*s == c)
			s++;
		j = 0;
		while ((s[j] != c) && (s[j] != '\0'))
			j++;
		ptr[i++] = ft_substr(s, 0, j);
		if (!ptr[i - 1])
			return (freeptr(ptr), NULL);
		s = s + j;
	}
	return (ptr);
}
