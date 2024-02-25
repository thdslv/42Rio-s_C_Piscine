#include <stdio.h>

int	add_ten(int nb)
{
	nb += 10;
	printf("\nnb + 10: %d", nb);
}

int main()
{
	int n1 = 42;
	int *p;
	p = &n1;
	int **q;
	q = &p;
	int n2 = 10;
	int *ptr = &n2;

	printf("\nValue of n1: %d", n1);
	printf("\nAdress of n1: %p", &n1);
	printf("\nAdress of n1 via p: %p", p);
	printf("\nAdress of n1 via q: %p", *q);
	*p = 84;
	printf("\nValue of n1 altered by p: %d", n1);
	**q = 21;
	printf("\nValue of n1 altered by q: %d", n1);
	printf("\nValue of n1 via n1 (%d), via *p (%d) and via **q (%d)", n1, *p, **q);
	printf("\nAdress of p: %p", &p);
	printf("\nq points to &p: %p", q);
	printf("\nValue of n2: %d", n2);
	add_ten(n2);
	printf("\nValue of n2 + 10: %d", n2);

	return 0;
}
