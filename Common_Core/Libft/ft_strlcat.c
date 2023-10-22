/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:45:35 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/22 19:24:29 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = 0;
	j = 0;
	r = ft_strlen(src) + ft_strlen(dst);
	while (dst[j])
		j++;
	while (src[i] && (j < (size - 1)))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (r);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	size_t n = 0;

	char dest1[10] = "Tes";
	char src1[] = "te";

	printf("Meu retorno: %zu\n", ft_strlcat(dest1, src1, strlen(dest1) + 1 + n));
	printf("Minha dest: %s\n\n", dest1);

	char dest2[10] = "Tes";
	char src2[] = "te";

	printf("Retorno original: %zu\n", strlcat(dest2, src2, strlen(dest2) + 1 + n));
	printf("Dest original: %s\n\n", dest2);

	return (0);
}*/
