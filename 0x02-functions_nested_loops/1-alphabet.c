#include <stdio.h>
/**
* main -Entry point
* function that prints the alphabet, in lowercase, followed by a new line.
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}
int main(void)
{
	print_alphabet;
	return (0);
}
