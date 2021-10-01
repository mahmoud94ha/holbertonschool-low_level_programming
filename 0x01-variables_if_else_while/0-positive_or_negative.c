#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - its here where
* we start the main program
*
* return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);

if (n > 0)
printf("%d n"" is positive\n");
if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}
