#include "main.h"

/**
*_puts -  function that prints a string, followed by a new line
*
*/
void _puts(char *str)
{
	int i;
	int j;

	i = 10;
	while(i < 20)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
