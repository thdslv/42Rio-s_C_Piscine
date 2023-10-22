/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:53:02 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/17 15:51:42 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			x++;
		}
		if (to_find[x] == '\0')
		{
			return (str + i);
		}
		i++;
		x = 0;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello 42, I'm here!";
	char	find[] = "42";

	printf("%s\n", ft_strstr(str, find));
	//printf("%lu\n", sizeof(find));
	return (0);
}*/
