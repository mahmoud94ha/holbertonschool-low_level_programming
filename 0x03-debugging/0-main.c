#include "main.h"
/**
* positive_or_negative - check is the number is positive or negative
*@i: is an int
*check if number is positive or negative
* Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
return (0);
}
