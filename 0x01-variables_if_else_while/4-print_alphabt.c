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
		if (al != 'e' && al != 'q')
		putchar(al);
	}
		putchar('\n');
return (0);
}
