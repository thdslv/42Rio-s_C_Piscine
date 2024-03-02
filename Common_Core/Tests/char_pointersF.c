#include <stdio.h>

void change(char* str)
{
	str = "Test2";
	printf("\n%s", str);
}

/*int main()
{
	char *s1 = "Test1";
	printf("\n%s", s1);
	change(s1);
	printf("\n%s", s1);
	return 0;
}*/
