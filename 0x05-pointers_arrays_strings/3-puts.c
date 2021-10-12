#include "main.h"

/**
*_puts -  function that prints a string, followed by a new line
*
*/
void _puts(char *str)
{
	int i;

	i = 10;
	while(i < 20)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
