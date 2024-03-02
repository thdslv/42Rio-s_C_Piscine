/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:40:09 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/01 19:09:03 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	char	*up_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*low_case = "abcdefghijklmnopqrstuvwxyz";
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 0;	
			while (up_case[j] != str[i])
				j++;
			while (j + 1 > 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;	
			while (low_case[j] != str[i])
				j++;
			while (j + 1 > 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int     main(int argc, char **argv)
{
        char *str = "!!A!BC!!";
        repeat_alpha(str);
        return (0);
}
