/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 07:38:15 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/17 07:38:18 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(src) < size)
		ft_memcpy(dest, src, ft_strlen(src) + 1);
	else
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (ft_strlen(src));
}

#include <stdio.h>

int	main()
{
	const char	*s = "Joao";
	char	*d = "Maria";

	ft_strlcpy(d, s, 5);
	printf("%s", d);
	return (0);
}
