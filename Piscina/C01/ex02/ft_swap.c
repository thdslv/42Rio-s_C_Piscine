/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:30:02 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/10 20:57:29 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*n1;
	int	*n2;

	a = 111;
	b = 999;
	n1 = &a;
	n2 = &b;
	printf("Value of a before calling in function: %i\n", a);
	printf("Value of b before calling in funciton: %i\n", b);
	printf(" \n");
	ft_swap(n1, n2);
	printf("Value of a after calling in function: %i\n", a);
	printf("Value of b after calling in function: %i\n", b);
	return (0);
}*/
