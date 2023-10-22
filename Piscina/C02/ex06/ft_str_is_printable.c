/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:25:41 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/13 17:27:29 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			return (0);
		}
		else if (str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_str_is_printable(""));
	printf("\n%i", ft_str_is_printable(" "));
	printf("\n%i", ft_str_is_printable("Ab!@#$%¨&*"));
	printf("\n%i", ft_str_is_printable("Ab!@#$\t%¨&*"));
	return (0);
}*/
