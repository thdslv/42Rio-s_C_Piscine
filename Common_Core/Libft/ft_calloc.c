/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:45:01 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/23 19:26:44 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
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
	mystr = ft_calloc(n, sizeof(char));
	pcstr = calloc(n, sizeof(char));
	while (n--)
	{
		printf("%c %c\n", mystr[n], pcstr[n]);
	}
	free(mystr);
	free(pcstr);
	return (0);
}*/
