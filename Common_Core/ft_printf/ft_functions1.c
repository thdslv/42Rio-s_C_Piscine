/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:34:45 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/23 23:21:29 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(const char *s)
{
	int	letters;

	letters = 0;
	while (*s)
	{
		write(1, s++, 1);
		letters++;
	}
	return (letters);
}

/*int	ft_puthex(const char *s)
{
	int	letters;

	letters = 0;
}*/
