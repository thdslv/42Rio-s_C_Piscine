#include <string.h>
#include <stdio.h>

void	*memset(void *s, int c, size_t n);

int	main()
{
	char	str[] = "Thalles da Silva";
	int	c;

	c = 65;//'A'
	printf("%s\t%p\n\n", str, str);

	memset(str, c, 7);
	
	printf("%s\t%p\n\n", str, str);
	
	memset(&c, c, 3);

	printf("%d\t%p\n\n", c, &c);
	return (0);
}
