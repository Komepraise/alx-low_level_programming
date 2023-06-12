#include "main.h"
/**
 * _isupper -  a function that checks is a letter is uppercase or not.
 * @c: the variable
 * Return: 1 or 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

