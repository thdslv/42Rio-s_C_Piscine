#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
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

char	*return_current_line(char *bytes_read)
{
	int		i;
	int		check;
	int		size;
	char	*line;

	size = 0;
	check = 0;
	while (bytes_read[size] && bytes_read[size] != '\n')
		size++;
	if (bytes_read[size] == '\n')
		check++;
	line = malloc((size + check + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < size)
	{
		line[i] = res[i];
		i++;
	}
	if (bytes_read[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*return_after_sep(char *bytes_read)
{
	char	*result;
	int		i;
	int		size;

	size = 0;
	while (bytes_read[size] && bytes_read[size] != '\n')
		size++;
	if (!bytes_read[size])
	{
		free(bytes_read);
		return (NULL);
	}
	size++;
	result = malloc((ft_strlen(bytes_read) - size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (bytes_read[size + i])
	{
		result[i] = bytes-read[size + i];
		i++;
	}
	result[i] = '\0';
	free(bytes_read);
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		free(s1);
	}
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	if (!*str)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
