/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:56:35 by thda-sil          #+#    #+#             */
/*   Updated: 2024/02/29 23:27:26 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	find_current_line(const char *str)
{
	printf("\n#3\nentered fdCurLine\n");//***************
	printf("\n#4\nvalue read: %s #\n", str);//*****
	if (!str)
		return (0);
	printf("read something\n");//***********
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*return_current_line(char *bytes_read)
{
	char	*line;
	int		size;
	int		check;
	int		i;

	size = 0;
	while (bytes_read[size] && bytes_read[size] != '\n')
		size++;
	check = 0;
	if (bytes_read[size] == '\n')
		check++;
	line = (char *) malloc((size + check + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < size)
	{
		line[i] = bytes_read[i];
		i++;
	}
	if (bytes_read[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*return_after_separator(char *bytes_read)
{
	char	*result;
	int		size;
	int		i;

	size = 0;
	while (bytes_read[size] && bytes_read[size] != '\n')
		size++;
	if (!bytes_read[size])
	{
		free(bytes_read);
		return (NULL);
	}
	size++;
	result = (char *) malloc((ft_strlen(bytes_read) - size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (bytes_read[size + i])
	{
		result[i] = bytes_read[size + i];
		i++;
	}
	result[i] = '\0';
	free(bytes_read);
	return (result);
}

char	*read_file(int fd)
{
	static char	*bytes_read[MAX_FD] = {NULL};
	char		*line;
	int			read_return;

	printf("\n#0\nstatic is created null: %s #\n", bytes_read[fd]);//***
	line = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	printf("\n#1\nline aft malloc: %s #\n", line);//*******
	if (!line)
		return (NULL);
	printf("\n#2\nline aft malloc check: %s #\n", line);/**********/
	read_return = 1;
	while (read_return > 0 && !find_current_line(bytes_read[fd]))
	{
		read_return = read(fd, line, BUFFER_SIZE);
		printf("\n#5\nline aft rd: %s #\n", line);//***********
		printf("\n#6\nrd_rtrn: %d\n", read_return);//*************
		if (read_return < 0)
		{
			free(line);
			return (NULL);
		}
		line[read_return] = '\0';
		printf("\n#7\nline aft '/0': %s #\n", line);//**********
		bytes_read[fd] = ft_strjoin_free(bytes_read[fd], line, 1);
		printf("\n#\nstatic aft join: %s #\n", bytes_read[fd]);//******
	}
	printf("\nline:%s ####\n", line);//**********
	free(line);
	printf("free line\n");//**********

	if (!bytes_read[fd])
		return (NULL);
	printf("is this double free?\n");//********
	line = return_current_line(bytes_read[fd]);
	bytes_read[fd] = return_after_separator(bytes_read[fd]);
	return (line);
}

char	*get_next_line(int fd)
{
	if (fd < 0 || fd > MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	return (read_file(fd));
}

#include <fcntl.h>
int     main(int c, char **v)
{
        (void) c;
	//char    *line;
        int     fd = open(v[1], O_RDONLY);

	printf("%s", get_next_line(fd));
	/*printf("###\n");
        while ((line = get_next_line(fd)))
        {
                printf("%s", line);
                free(line);
        }*/
        return (0);
}
