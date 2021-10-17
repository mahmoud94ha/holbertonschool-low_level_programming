#include "main.h"
/**
 * *_strcmp - function
 *@s1: pointer
 *@s2: pointer
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
int result, i = 0;
while ((s1[i] == s2[i]) && ((s1[i]) || (s2[i])))
{
i++;
result = 0;
}
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
}

return (result);
}
