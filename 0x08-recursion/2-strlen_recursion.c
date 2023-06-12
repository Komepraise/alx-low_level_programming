#include "main.h"

/**
 * _strlen_recutrion - A fuction that shows string length
 * @s: The String 
 * Return: The string length
 *
 */

int_strlen_recursion(char *s)
{
	int x = 0;
	if(*s)
	{
		x++;
		x+= _strlen_recursion(s + 1);
	}
	return (x);
}

