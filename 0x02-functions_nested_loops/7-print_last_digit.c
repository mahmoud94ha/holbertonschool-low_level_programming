#include "main.h"
/**
*print_last_digit - print the last digit of a number
*@n: is the last digit
*Return:last digit
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last);
	return (last);
}
