#include <stdio.h>
#include <unistd.h>

int	main()
{
	int	id = fork();

	if (id != 0)
		fork();

	printf("Hello world\n");
	if (id == 0)
	{
		printf("Hello from the child process\n");
	}
	else
		printf("Hello from the parent process\n");
	return (0);
}
