/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:06:41 by thda-sil          #+#    #+#             */
/*   Updated: 2024/02/29 23:24:17 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int free_str)
{
	char	*str;

	printf("\n#8\ncame to joinFree\n");//*******
	printf("\n#9\nstatic: %s # line: %s #\n", s1, s2);//****
	str = ft_strjoin(s1, s2);
	printf("\n#\nstatic+line: %s #\n", str);//*******
	printf("maybe?\n");//************
	if (free_str == 1 || free_str == 3)
		free(s1);
	printf("did it free?\n");//*************
	if (free_str == 2 || free_str == 3)
		free(s2);
	printf("did it get here?\n");//******
	return (str);
}
