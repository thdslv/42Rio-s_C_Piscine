/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:34:02 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/10 20:58:41 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	n1 = 10;
	int	n2 = 5;
	int	*x;
	int	*y;

	x = &n1;
	y = &n2;
	ft_div_mod(n1, n2, x, y);
	printf("Divisão: %i", *x);
	printf(" \n");
	printf("Resto: %i", *y);
	return (0);
}*/
