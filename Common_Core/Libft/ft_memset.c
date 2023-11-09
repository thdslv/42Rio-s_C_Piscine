/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:31:18 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/09 15:52:53 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>

int	main()
{
	char 	str[] = "Thalles da Silva";
	int	a;

	a = 65;
	printf("%s\t%p\n", str, str);

	ft_memset(str, a, 7);

	printf("%s\t%p\n", str, str);

	ft_memset(&a, a, 3);

	printf("%d\t%p\n", a, &a);
	return (0);
}*/
