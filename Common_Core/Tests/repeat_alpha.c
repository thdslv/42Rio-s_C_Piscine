/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:15:07 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/01 19:13:12 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	char	*up_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*low_case = "abcdefghijklmnopqrstuvwxyz";
	int		i;
	int		j;
	int		times;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{ 
			times = (str[i] - 65 + 1);//65 - 65 + 1= 1
			while (times)
			{
				write(1, &str[i], 1);
				times--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			times = (str[i] - 97 + 1);
			while (times)
			{
				write(1, &str[i], 1);
				times--;
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		printf("#\n");
		return (0);
	}
	repeat_alpha(argv[1]);
	write(1, "\n",1);
	return (0);
}
