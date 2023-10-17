/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:36:29 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/10 21:06:46 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	temp;

	i = 0;
	x = size - 1;
	temp = tab[i];
	while (i < x)
	{
		if (tab[i] > tab[i +1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	array[5] = {2, 4, 1, 3, 5};
	int	count;

	count = 0;
	ft_sort_int_tab(array, 5);
	while (count < 5)
	{
		printf("%i-", array[count]);
		count++;
	}
	return (0);
}*/
