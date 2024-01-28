#include "get_next_line_bonus.h"

char	*read_file(int fd)
{
	int			read_return;
	char		*line;
	static char	*bytes_read[MAX_FD] = {NULL};

	line = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	read_return = 1;
	while (read_return > 0 && !find_current_line(bytes_read[fd]))
	{
		read_return = read(fd, line, BUFFER_SIZE);
		if (read_return < 0)
		{
			free(line);
			return (NULL);
		}
		line[read_return] = '\0';
		bytes_read[fd] = ft_strjoin(bytes_read[fd], line);
	}
	free(line);
	if (!bytes_read[fd])
		return (NULL);
	line = return_current_line(bytes_read[fd]);
	res[fd] = return_after_sep(bytes_read[fd]);
	return (line);
}

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (read_file(fd));
}

/*#include <fcntl.h>
#include <stdio.h>
int     main(int c, char **v)
{
        (void) c;
        char    *line;
        int     fd = open(v[1], O_RDONLY);

        //printf("%s", get_next_line(fd));

        while ((line = get_next_line(fd)))
        {
                printf("%s", line);
                free(line);
        }
        return (0);
}*/
