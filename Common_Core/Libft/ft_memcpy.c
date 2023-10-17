/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:17:28 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/17 04:02:10 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	if (!dest && !src && n > 0)
		return (0);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	destiny[] = "Thalles";
	char	source[] = "da Silva";
	char	destiny2[] = "Thalles";

	printf("%s  %p\n%s %p\n\n", source, source, destiny, destiny);
	memcpy(destiny, source, 1);
	printf("%s  %p\n%s %p\n\n", source, source, destiny, destiny);

	printf("%s %p\n%s %p\n\n", source, source, destiny2, destiny2);
	ft_memcpy(destiny2, source, 2);
	printf("%s  %p\n%s %p\n", source, source, destiny2, destiny2);
	return (0);
}*/
