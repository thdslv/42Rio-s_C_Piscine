/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:05:16 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/01 15:31:53 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	if (!little)
		return ((char *)big);
	i = 0;
	x = 0;
	while (big[i] && (i < len))
	{
		while ((big[i + x] == little[x]) && big[i + x] && ((i + x) < len))
		{
			x++;
		}
		if (little[x] == '\0')
			return ((char *)big + i);
		i++;
		x = 0;
	}
	return (0);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	printf("%s\n", ft_strnstr("Cars and cats begin with 'ca'", "ca", 29));
	printf("%s\n", ft_strnstr("Cars and cats begin with 'ca'", "ca", 11));
	printf("%s\n", ft_strnstr("Cars and cats begin with 'ca'", "", 29));
	printf("%s\n", ft_strnstr("Cars and cats begin with 'ca'", "ca", 9));
	return (0);
}*/
