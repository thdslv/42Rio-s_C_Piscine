#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int	main()
{
	int	id = fork();
	int	n;
	int	i;

	if (id == 0)
	{
		n = 1;	
	}
	else
	{
		n = 6;
	}
	//if (id != 0)
	wait;
	for (i = n; i < n + 5; i++)
	{
		printf("%d ", i);
		fflush(stdout);
	}
	if (id != 0)
		printf("\n");
	return (0);
}
