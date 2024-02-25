#include <stdio.h>

void change(char *s)
{
	s = "Test3";
	printf("\ns in func: %s", s);
}

int main()
{
	char *s1 = "Test1";
	char **p = &s1;
	printf("\n%s", s1);
	change(s1);
	printf("\n%s", s1);
	return 0;
}
