#include <stdio.h>
/**
* main -Entry point
* print lowercase then uppercase alphabets
* Return: Always 0 (Success)
*/
	int main(void)
{
	char al;
	char all;
    char a1 = 'a';
    char a2 = 'b';
    char a3 = 'c';
    char a4 = 'd';
	for (al = 'f'; al <= 'p'; al++)
	{
		putchar (a1+a2+a3+a4+al);
	}
	for (al = 'r'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
return (0);
}
