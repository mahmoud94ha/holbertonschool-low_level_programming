#include <stdio.h>
/**
* main -Entry point
* print lowercase then uppercase alphabets
* Return: Always 0 (Success)
*/
	int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
return (0);
}