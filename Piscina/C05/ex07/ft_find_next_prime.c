/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/10 14:54:32 by thda-sil	       #+#    #+#	      */
/*   Updated: 2023/10/10 17:42:03 by thda-sil         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2 || nb == -2147483648)
		return (0);
	if (nb == 2 || nb == 2147483647)
		return (1);
	while (x < nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_find_next_prime(2147483647));
}*/
