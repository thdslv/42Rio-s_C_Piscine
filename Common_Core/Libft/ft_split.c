/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:20:54 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/06 20:13:58 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	w_count(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c) && (s[i - 1] != c))
			words++;
		i++;
	}
	if ((s[i] == '\0') && (s[i - 1] != c))
		words++;	
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	x;

	if (!s)
		return (NULL);
	split = (char **)ft_calloc((w_count(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	x = 0;
	while (x < w_count)
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
		{
			split[x][i] = s[i];
			i++;
		}
		x++;
	}
	return (split);
}

#include <stdio.h>

int	main()
{//incluir as palavras na split
	char	str[] = "   teste teste    testeeeeeee";
	char	c = ' ';

	//printf("%s", ft_split(str));
	printf("%zu", w_count(str, c));
	return (0);
}
