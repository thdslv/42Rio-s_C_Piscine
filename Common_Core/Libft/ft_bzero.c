/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:38:12 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/09 15:49:06 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <stdio.h>

int     main()
{
        char    str[] = "Thalles da Silva";
        int     a;

        a = 65;
        printf("%s\t%p\n", str, str);

        ft_bzero(str, 7);

        printf("%s\t%p\n", str, str);

        ft_bzero(&a, 3);

        printf("%d\t%p\n", a, &a);
        return (0);
}*/
