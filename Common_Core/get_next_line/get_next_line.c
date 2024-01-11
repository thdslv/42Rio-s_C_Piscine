/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:21:18 by thda-sil          #+#    #+#             */
/*   Updated: 2024/01/10 20:45:22 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd)
{
	static char	*result;
	char		*line;
	int			read_return;

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	read_return = 1;
	while (read_return > 0 && !find_current_line(result))
	{
		read_return = read(fd, line, BUFFER_SIZE);
		if (read_return < 0)
		{
			free(line);
			return (NULL);
		}
		line[read_return] = '\0';
		result = ft_strjoin(result, line);
	}
	free(line);
	if (!result)
		return (NULL);
	line = return_current_line(result);
	result = return_after_separator(result);
	return (line);
}

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (read_file(fd));
}

#include <stdio.h>
int	main(void)
{
	int	fd;
	char	*line;

	fd = open(file.txt, O_RDONLY);
	str = get_next_line(fd);
	free();
	return (0);
}
