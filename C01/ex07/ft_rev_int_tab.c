/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:16:56 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/10 21:05:34 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	t;

	i = 0;
	x = size - 1;
	while (i < x)
	{
		t = tab[i];
		tab[i] = tab[x];
		tab[x] = t;
		i++;
		x--;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	array[5] = {1, 2, 3, 4, 5};
	int	count;

	count = 0;
	ft_rev_int_tab(array, 5);
	while (count < 5)
	{
		printf("%i-", array[count]);
		count++;
	}
	return (0);
}*/
