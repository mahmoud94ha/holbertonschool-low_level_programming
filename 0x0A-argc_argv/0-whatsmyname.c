#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - function
 *@argc: argument
 *@argv: argument
 *Return: int
 */
int main(int argc, char **argv)
{
argc--;
printf("%s\n", argv[0]);
return (0);
}
