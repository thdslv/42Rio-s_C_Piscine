/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:09:54 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/13 18:15:50 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **strs, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (size > 0)
	{
		while (strs[size - 1][i] != '\0')
		{
			i++;
			count++;
		}
		size--;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*ptr;

	ptr = malloc(sizeof(char *) * ft_strlen(strs, size));
	i = 0;
	j = 0;
	x = 0;
	while (j < size)
	{
		while (strs[j][i] != '\0')
		{
			ptr[x++] = strs[j][i++];
		}
		i = 0;
		while (sep[i] != '\0' && j < size - 1)
		{
			ptr[x++] = sep[i++];
		}
		j++;
		i = 0;
	}
	ptr[x] = '\0';
	return (ptr);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc - 1, argv + 1, "--"));
}*/
