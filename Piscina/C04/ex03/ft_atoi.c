/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:44:49 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/17 21:19:27 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	count;

	i = 0;
	res = 0;
	count = 0;
	while (str[i] == '-' || str[i] == '+' || (str[i] >= 0 && str[i] <= 32))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (count % 2 != 0)
		res = -res;
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%i\n", ft_atoi("  \n ---123a1"));
	printf("%i\n", atoi("    \n  -123a1"));
	return (0);
}*/
