/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:34:30 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/10 21:01:45 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	if (*b != 0)
	{
		t = *a / *b;
		*b = *a % *b;
		*a = t;
	}
}

/*#include <stdio.h>

//A função divide os inteiros apontados por a e b.
//O resultado da divisão fica armazenado no inteiro apontado por a.
//O resto da divisão fica armazenado no inteiro apontado por b.

int	main(void)
{
	int	n1 = 10;
	int	n2 = 5;
	int	*x;
	int	*y;

	x = &n1;
	y = &n2;
	ft_ultimate_div_mod(x, y);
	printf("Divisão: %i", *x);
	printf(" \n");
	printf("Resto: %i ", *y);
	return (0);
}*/
