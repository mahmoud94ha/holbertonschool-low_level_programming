#include "main.h"
/**
*_isalpha - function that checks for alphabetic
*@c: is an int
*Return: 1 if lowercase or uppercase, 0 if otherwise
*/
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
