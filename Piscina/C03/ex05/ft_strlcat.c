/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:32:07 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/22 19:04:57 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = 0;
	j = 0;
	r = strlen(src) + strlen(dest);
	while (dest[j])
		j++;
	while (src[i] != '\0' && (j < (size - 1)))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (r);
}

#include <stdio.h>

int	main(void)
{
	size_t	n = 0;

	char dest1[10] = "Tes";
	char src1[] = "te";

	printf("Meu retorno: %zu\n", ft_strlcat(dest1, src1, strlen(dest1) + 1 + n));
	printf("Minha dest: %s\n\n", dest1);
	
	char dest2[10] = "Tes";
	char src2[] = "te";

	printf("Retorno original: %zu\n", strlcat(dest2, src2, strlen(dest2) + 1 + n));
	printf("Dest original: %s\n\n", dest2);

	return (0);
}
