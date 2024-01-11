/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:56:42 by thda-sil          #+#    #+#             */
/*   Updated: 2024/01/10 22:04:18 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2 
# endif
int	main(int c, char **v)
{
	(void) c;
	char	line[BUFFER_SIZE];
	int	fd = open(v[1], O_RDONLY);
	int	holder;

	while ((holder = read(fd, line, BUFFER_SIZE)) > 0)
	{
		printf("%s", line);
	}
	return (0);
}
