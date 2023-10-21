/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:55:57 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/20 20:18:24 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n > ft_strlen(s))
		return (0);
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	char	str[] = "Thalles";
	int	x = 97;//'a'
	char	*test;

	test = ft_memchr(str, x, 7);
	printf("%s", test);
	return (0);
}*/
