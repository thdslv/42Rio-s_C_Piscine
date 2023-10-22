/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:07:38 by thda-sil          #+#    #+#             */
/*   Updated: 2023/09/13 22:59:23 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)//checks if the current charachter is alphanumeric
{
	if (c >= 48 && c <= 57)//checks if it's a number
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)//checks is it's an uppercase
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)//checks if it's a lowercase
	{
		return (1);
	}
	return (0);
}

int	is_lower(char c)//checks if the next character is a lowercase
{
	if ((c + 1 >= 97) && (c+1 <= 122))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')//makes all lowercase
	{
		if (str[i] >= 65 && str[i] <= 90)
		str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != 0)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)//makes the 1st uppercase
		{
			str[i] = str[i] - 32;
		}
		if (is_alphanum(str[i]) == 1
			&& is_lower(str[i + 1]) == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char string[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(string));
	return (0);
}
