/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:56:42 by thda-sil          #+#    #+#             */
/*   Updated: 2024/01/17 20:40:17 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5 
# endif

char	*read_file(int fd)
{
	static char	*bytes_read;
	char	*line;
	int		read_return;

	line = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	read_return = 1;
	while ((read_return > 0) && !find_current_line(bytes_read))
	{
		read_return = read(fd, line, BUFFER_SIZE);
		if (read_return < 0)
		{
			free(line);
			return (NULL);
		}
		line[read_return] = '\0';//??????
	}
}

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return(read_file(fd));
}

int	main(int c, char **v)
{
	(void) c;
	char	line[BUFFER_SIZE];
	int	fd = open(v[1], O_RDONLY);
	int	holder;

	while ((holder = read(fd, line, BUFFER_SIZE)) > 0)
	{
		printf("%s", line);
		printf("\nTEST\n");
	}
	return (0);
}
