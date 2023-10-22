/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:09:27 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/13 17:25:15 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("%i", ft_str_is_uppercase("HELLOWORLD"));
	printf("\n%i", ft_str_is_uppercase(""));
	printf("\n%i", ft_str_is_uppercase("HellWorld"));
	return (0);
}*/
