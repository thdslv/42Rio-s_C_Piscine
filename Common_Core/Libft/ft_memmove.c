/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:34:06 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/23 21:37:27 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>

int	main()
{
	char    string[] = "lorem ipsum dolor sit amet";
      	char    dest[55];
	char	dest2[55];
	char	string2[] = "lorem ipsum dolor sit amet";

        printf("Antes:%s\n\n", string);
       
	memmove(dest, string, 8);
        
	printf("Original:%s\n\n", dest);

        ft_memmove(dest2, string2, 8);
        
	printf("ft_:%s\n", dest2);
        
	return (0);
}*/
