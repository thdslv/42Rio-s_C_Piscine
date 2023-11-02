/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:11:54 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/01 14:44:57 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	char	str[] = "Thalles";
	int	x = 84;//'a'
	printf("%s", ft_strrchr(str, x));
	return(0);
}*/
