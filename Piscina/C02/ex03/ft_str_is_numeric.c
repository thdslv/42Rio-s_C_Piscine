/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:05:56 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/13 17:22:09 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_str_is_numeric("H3ll0W0rld"));
	printf("\n%i", ft_str_is_numeric(""));
	printf("\n%i", ft_str_is_numeric("2345678"));
	return (0);
}*/
