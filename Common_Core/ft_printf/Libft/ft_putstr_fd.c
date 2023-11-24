/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 05:05:33 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/22 18:48:48 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	letters;

	if (!s)
		return (0);
	letters = 0;
	while (*s)
		letters += write(fd, s++, 1);
	return (letters);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Quarante-deux";

	ft_putstr_fd(str, 1);
	return (0);
}*/
