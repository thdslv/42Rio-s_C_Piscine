/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:32:39 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/13 17:40:09 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello 42 I'm using malloc";
	printf("original\t: base  : %s | %p\n", str, str);
	allocated = strdup(str);
	printf("copied\t\t: alloc : %s | %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied\t: alloc : %s | %p\n", allocated, allocated);
	free(allocated);
}*/
