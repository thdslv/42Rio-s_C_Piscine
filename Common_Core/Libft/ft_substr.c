#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	while (i < ft_strlen(s))
		i++;
	sub = (char *)malloc(len * sizeof(char) + 1);
	j = 0;
	while (s[i] < len)
	{
		sub[j] = s[i + j];
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

#include <stdio.h>

int	main()
{

}
