#include "main.h"
/**
*_strlen - function that returns the length of a string
*@s: is an string
*return - always 0
*/
int _strlen(char *s)
{
	/**
	 *  return value of '_strlen'
	 */
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
