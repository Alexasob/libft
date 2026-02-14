/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobolev <asobolev@student.42istanbul.com.tr +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:02:31 by asobolev          #+#    #+#             */
/*   Updated: 2026/02/14 02:35:58 by asobolev         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	wordcount;

	wordcount = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c)
			wordcount ++;
		while (*s != c && *s)
			s++;
	}
	return (wordcount);
}

static void	freeptr(char **ptr )
{
	int	i;

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
	int		wordcoun;
	int		i;
	int		j;
	char	**ptr;

	if (!s)
		return (NULL);
	wordcoun = wordcount(s, c);
	i = 0;
	ptr = ft_calloc(wordcoun + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i < wordcoun)
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
