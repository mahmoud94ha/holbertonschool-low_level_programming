#include <stdio.h>
/**
* main -Entry point
* print lowercase then uppercase alphabets
* Return: Always 0 (Success)
*/
	int main(void)
{
	char al;
	for (al = 'a'; al <= 'd'; al++)
	{
	    putchar(al);
	}
	for (al = 'f'; al <= 'p'; al++)
	{
		putchar (al);
	}
	for (al = 'r'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
return (0);
}
