/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:51:04 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/27 13:48:45 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	while (i < start)
		i++;
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (!sub)
		return (0);
	j = 0;
	while (j < len)
	{
		sub[j] = s[i + j];
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main()
{

}*/
