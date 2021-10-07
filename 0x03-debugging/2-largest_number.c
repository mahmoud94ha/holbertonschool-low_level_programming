#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

<<<<<<< HEAD
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
=======
	if (a > b && a > c)
	{
		largest = a;
		printf(largest);
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
>>>>>>> 7710aed437f0cded8f6be40af96b54982a2c986e

    return (largest);
}

