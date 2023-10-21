/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:34:06 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/20 20:44:48 by thda-sil         ###   ########.fr       */
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
	while ()
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char    destiny[] = "Thalles";
        char    source[] = "da Silva";
        char    destiny2[] = "Thalles";

        printf("%s  %p\n%s %p\n\n", source, source, destiny, destiny);
        memmove(destiny, source, 1);
        printf("%s  %p\n%s %p\n\n", source, source, destiny, destiny);

        printf("%s %p\n%s %p\n\n", source, source, destiny2, destiny2);
        ft_memmove(destiny2, source, 2);
        printf("%s  %p\n%s %p\n", source, source, destiny2, destiny2);
        return (0);
}
