#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int i;
float floatt;
char c;
long int longint;
long long int longlong;

printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlong));
printf("Size of a float: %zu byte(s)\n", sizeof(floatt));
return (0);
}
