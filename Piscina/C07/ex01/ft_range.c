/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:02:37 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/13 17:59:34 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vet;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	vet = (int *)malloc(size * sizeof(int));
	if (!vet)
		return (0);
	i = 0;
	while (i < size)
	{
		vet[i] = min + i;
		i++;
	}
	return (vet);
}

/*#include <stdio.h>

int	main(void)
{
	int	min = 1;
	int	max = 5;
	int	size;
	int	i;
	int	*vet;

	size = max - min;
	vet = ft_range(min, max);
	i = 0;
	while (i < size)
	{
		printf("%i ", vet[i]);
		i++;
	}
}*/
