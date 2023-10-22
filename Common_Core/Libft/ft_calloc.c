/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:45:01 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/22 20:35:21 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		*proper;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = (void *)malloc(nmemb * size);
	proper = (int *)ptr;
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*mystr;
	char	*pcstr;
	int	n;

	n = 5;
	mystr = ft_calloc(n, sizeof(int));
	pcstr = calloc(n, sizeof(int));

	while (n > 0)
	{
		printf("%i %i\n", mystr[n], pcstr[n]);
		n--;
	}
	return (0);
}*/
