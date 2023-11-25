/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:57:37 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/24 17:39:48 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	letters;

	letters = 0;
	if (nb == -2147483648)
	{
		letters += write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		letters += ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		letters += ft_putchar(nb + 48);
	return (letters);
}

int	ft_putunsigned(int nb)
{
	int	letters;

	letters = 0;
}
