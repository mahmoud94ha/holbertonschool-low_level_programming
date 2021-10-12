#include "main.h"

/**
*_puts -  function that prints a string, followed by a new line
*
*/
void _puts(char *str)
{
	int i;
	ch = *str;

	i = 10;
	while(i < 20)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
}
