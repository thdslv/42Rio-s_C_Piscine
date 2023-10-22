/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:17:57 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/13 18:07:20 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*vet;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	vet = (int *)malloc(size * sizeof(int));
	if (!vet)
		return (-1);
	i = 0;
	*range = vet;
	while (i < size)
	{
		vet[i] = min + i;
		i++;
	}
	return (size);
}

/*#include <stdio.h>

int	main(void)
{
	int	min = 1;
	int	max = 5;
	int	size;
	int	*vet;

	size = ft_ultimate_range(&vet, min, max);
	printf("%i", size);
}*/
