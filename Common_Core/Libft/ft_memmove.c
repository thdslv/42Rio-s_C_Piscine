/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:34:06 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/17 05:45:34 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	int		i;

	i = 0;
	while (i < n)
	{
		temp[i] = (char) src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char    destiny[] = "";
        char    source[] = "da";
        //char    destiny2[] = "Thalles";

        printf("%s  %p\n%s %p\n\n", source, source, destiny, destiny);
        memmove(destiny, source, 1);
        printf("%s  %p\n%s %p\n\n", source, source, destiny, destiny);

        //printf("%s %p\n%s %p\n\n", source, source, destiny2, destiny2);
        //ft_memmove(destiny2, source, 2);
        //printf("%s  %p\n%s %p\n", source, source, destiny2, destiny2);
        return (0);
}*/
