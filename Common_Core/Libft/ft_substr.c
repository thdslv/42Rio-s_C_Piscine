/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:51:04 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/08 18:33:44 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = start;
	if (!s)
		return (0);
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (!sub)
		return (0);
	if (len == 0 || i >= ft_strlen(s))
		sub[i] = '\0';
	j = 0;
	while ((i < ft_strlen(s)) && (j < len))
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main()
{

}*/
