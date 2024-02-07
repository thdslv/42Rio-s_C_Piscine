/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:53:10 by thda-sil          #+#    #+#             */
/*   Updated: 2024/02/07 20:10:16 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr_base(long unsigned int nbr, unsigned int base, int is_upper)
{
	int		digits;
	char	*base_chars;

	if (is_upper)
		base_chars = "0123456789ABCDEF";
	else
		base_chars = "0123456789abcdef";
	digits = 0;
	if (nbr < 0)
	{
		digits += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base)
	{
		digits += ft_putnbr_base(nbr / base, base, is_upper);
		digits += ft_putnbr_base(nbr % base, base, is_upper);
	}
	else
		digits += ft_putchar(base_chars[nb]);
	return (digits);
}