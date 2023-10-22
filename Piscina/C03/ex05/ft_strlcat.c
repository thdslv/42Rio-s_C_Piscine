/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:32:07 by marcosv2          #+#    #+#             */
/*   Updated: 2023/09/03 20:57:21 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		if (j < size - 1)
		{
			dest[j] = src[i];
		}
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}

#include <stdio.h>

int	main(void)
{
	char destino[101] = "Tes";

	printf("- %d\n", ft_strlcat(destino, "te", 5));
	printf("- %s", destino);
}
