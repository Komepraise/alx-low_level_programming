#include "main.h"
/**
 * _memset:  the fucntoion in case
 * @s:  string
 * @b:  character
 * @n: integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0;
		a < n; a++)
		s[a] = b;
	return (s);
}

