/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:59:20 by thda-sil          #+#    #+#             */
/*   Updated: 2023/10/14 01:14:21 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	i = 0;
	while (argv[++i])
		printf("%i\n", ABS(atoi(argv[i])));
	return (0);
}
