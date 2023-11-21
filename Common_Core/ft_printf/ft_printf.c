/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:07:03 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/21 12:49:51 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char c)
{
	return (write(1, &c ,1));
}

int	ft_putstr(const char *s)
{
	int	letters;

	if (!s)
		return (0);
	letters = 0;
	while (*s)
		letters += write(1, s++ ,1);
	return (letters);
}

static int ft_arg_format(const char c, va_list args)
{
	int	letters;
	(void) args;
	letters = 0;
	if (c == '%')
		letters = write(1, "%", 1);
	if (c == 'c')
		letters = ft_putchar(va_arg(args, int));
	if (c == 's')
		letters = ft_putstr(va_arg(args, char *));
	/*if (c == 'p')
		
	if (c == 'd')
		
	if (c == 'i')
		
	if (c == 'u')
		
	if (c == 'x')
		
	if (c == 'X')
		*/
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
	char	*str = "teste: %% %c %s";

	ft_printf(str, 'c', "aaa");
	printf("\n");
	printf("teste: %% %c %s", 'c', "aaa");
	return (0);
}
