#include "main.h"

/**
*_puts -  function that prints a string, followed by a new line
*
*/
v
void _puts(char *str)
{
	int i;

	i = 10;
	while(i < 20)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}
