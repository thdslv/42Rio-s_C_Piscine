/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:21:18 by thda-sil          #+#    #+#             */
/*   Updated: 2024/01/06 18:00:32 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
	return();
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
