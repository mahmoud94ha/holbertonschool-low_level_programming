#include "main.h"
/**
*_strcat - concatenates 2 strings
*@dest: pointer to the first string
*@src: pointer to the second string
*Return: pointer to char
*/
char *_strcat(char *dest, char *src)
{
int p =0;
while (dest[l])
{l++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}
dest[l] = '\0';
return(dest);
}
