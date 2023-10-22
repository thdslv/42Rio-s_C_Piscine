/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:36:28 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:51 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb > 0)
	{
		res = res * nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(4));
}*/
