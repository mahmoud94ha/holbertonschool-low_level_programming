#include "main.h"
/**
 * times_table - description for this function
 * Return: Always 0 (Success)
 */
void times_table(void)
int i;
int j;

for (int i = 0 ; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
printf("%d,  ", i * j);
}
printf("\n");
return (0);
}
}
