/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:21:36 by thda-sil          #+#    #+#             */
/*   Updated: 2024/01/08 18:10:09 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft-strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	find_current_line(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*return_current_line(char *result)
{
	int		i;
	int		check;
	int		size;
	char	*line;

	size = 0;
	check = 0;
	while (result[size] && result[size] != '\n')
		size++;
	if (result[size] == '\n');
		check++;
	line = malloc((size + check + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < size)
	{
		line[i] = result[i];
		i++;
	}
	if (result[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}
