/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:34:06 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/23 18:21:30 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	i = 0;
	if (src < dest)
	{
		while (n >= 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char    destiny[10] = "Thalles";
        char    source[] = "da Silva";
        char    destiny2[10] = "Thalles";

        printf("Src:%s\nAntes:%s\n\n", source, destiny);
        memmove(destiny, source, 2);
        printf("Src:%s\nOriginal:%s\n\n", source, destiny);

        printf("Src:%s\nAntes:%s\n\n", source, destiny2);
        ft_memmove(destiny2, source, 2);
        printf("Src:%s\nft_:%s\n", source, destiny2);
        return (0);
}*/
