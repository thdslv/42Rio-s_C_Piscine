/*Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/*#include <stdio.h>
int	main(void)
{
	int	x = 10;
	int	y = 1;

	printf("%d and %d\n" , x, y);
	ft_swap(&x, &y);
	printf("%d and %d\n ", x, y);
	return (0);
}*/
