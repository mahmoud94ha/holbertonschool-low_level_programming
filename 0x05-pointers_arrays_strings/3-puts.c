include "main.h"
include <string.h>
/**
*_puts - function that returns length
*@str:pointer
*Return: int
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
