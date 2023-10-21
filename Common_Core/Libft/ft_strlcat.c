/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:45:35 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/20 20:16:25 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j])
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (size + j);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char	s[] = "da Silva";
	char	d[] = "Thalles ";

	printf("%zu\n", strlcat(d, s , 8));
	printf("%zu\n", ft_strlcat(d, s , 8));
	printf("%s\n", d);
	return (0);
}*/
