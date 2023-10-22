/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:35:20 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/18 18:48:53 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_factorial(0));
}*/
