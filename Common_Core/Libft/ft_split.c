/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:20:54 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/09 15:26:38 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c) && (i > 0) && (s[i - 1] != c))
			words++;
		i++;
	}
	if ((s[i] == '\0') && (i > 0) && (s[i - 1] != c))
		words++;
	return (words);
}

static void	allocation(char **split, char const *s, char c, size_t w_count)
{
	size_t	i;
	size_t	x;

	x = 0;
	while (x < w_count)
	{
		while (*s == c)
			s++;
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		split[x] = (char *)malloc((i + 1) * sizeof(char));
		if (!split[x])
			break ;
		if (i)
			ft_strlcpy(split[x], s, i + 1);
		s += i;
		x++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	w_count;

	if (!s)
		return (NULL);
	w_count = word_count(s, c);
	split = (char **)malloc((w_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	allocation(split, s, c, w_count);
	split[w_count] = 0;
	return (split);
}

/*#include <stdio.h>
int	main()
{
	char	*str = "  a a  a ";
	char	c = ' ';
	size_t	i = 0;
	size_t	word_c = word_count(str, c) + 1;
	char	**split;

	split = ft_split(str, c);
	while (word_c > 0)
	{
		printf("%s\n", split[i]);
		i++;
		word_c--;
	}
	return (0);
}*/
