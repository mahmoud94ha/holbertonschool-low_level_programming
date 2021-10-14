#include "main.h"
/**
*_strcat - concatenates 2 strings
*@dest: pointer to the first string
*@src: pointer to the second string
*Return: pointer to char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i))
		i++;
	while (*(src))
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}

	return (dest);
}
