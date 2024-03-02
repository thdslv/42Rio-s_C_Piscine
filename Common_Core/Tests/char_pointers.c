#include <stdio.h>

void change(char **str)
{	// str is a char** so it has the & to a char*
	*str = "Test2"; // str is &s1 so derreferencing it (*str)
			// gives us s1 ("Test") s1 has &'t' so *s = 'T'
	printf("\n%s", *str);
}

/*int main()
{
	char *s1 = "Test1"; // s1 = the adress of 'T'
	char **p = &s1; // p = the adress of s1
	printf("\n%s", s1);
	change(&s1); // the adress of s1 (&s || p) is sent
	printf("\n%s", s1);
	return 0;
}*/
