#include "main.h"
/**
*swap_int - function that swaps the values of two integers
*@a: is an integer
*@b: is an integer
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
