#include "main.h"

/**
 * _print_rev_recursion - The function.
 * @s:The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	if ('\n')
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}
