#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -Entry point
* give last digit of a random number
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    Last = n % 10;
    if (Last > 5)
    printf("Last digit of %d is %d and is greater than 5\n", n, Last);
    else if (Last == 0)
    printf("Last digit of %d is %d and is 0\n", n, Last);
    else
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last);
return (0);
}
