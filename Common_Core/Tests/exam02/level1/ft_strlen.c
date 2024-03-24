/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	if(!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Hello";
	
	printf("%d", ft_strlen(str));
	return (0);
}*/
