/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:07:03 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/23 23:50:05 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_arg_format(const char c, va_list args)
{
	int	letters;
	(void) args;
	letters = 0;
	if (c == '%')
		letters += write(1, "%", 1);
	if (c == 'c')
		letters += ft_putchar(va_arg(args, int));
	if (c == 's')
		letters += ft_putstr(va_arg(args, char *));
	/*if (c == 'p')
		letters = ;*/
	if (c == 'd' || c == 'i')
		letters += ft_putnbr(va_arg(args, int));

	/*if (c == 'i')
		letters = ;

	if (c == 'u')
		letters = ;
	if (c == 'x')
		letters = ;
	if (c == 'X')
		letters = ;*/
	return (letters);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	letters;

	letters = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			letters += ft_arg_format(*(++format), args);
		else
			letters += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (letters);
}

// int letters_printed = ft_printf("teste: %s teste %c", string, char);
#include <stdio.h>
int	main(void)
{
	char	*str = "teste: %% %c %s %i %d";

	ft_printf(str, 'c', "aaa", 42, 0.42);
	printf("\n");
	printf("teste: %% %c %s \n", 'c', "aaa");
	printf("\n\n\n\n\n");
	return (0);
}
