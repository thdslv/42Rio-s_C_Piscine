/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:35:38 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/17 15:27:17 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("\%d", ft_strncmp("Hello", "Helko", 4)); //1
	printf("\n%d", ft_strncmp("Helko", "Hello", 4)); //-1
	printf("\n%d", ft_strncmp("Hello", "Hello", 4)); //0
	return (0);
}*/
