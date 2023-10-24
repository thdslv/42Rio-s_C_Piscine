/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:27:22 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/23 18:44:22 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	dup = malloc(ft_strlen(s) * sizeof(char));
	if (!dup)
		return (0);
	i = 0;
	while (dup[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	*s = "Hello";
	printf("Original: %s\n", strdup(s));
	printf("ft_: %s", ft_strdup(s));
	return (0);
}*/
