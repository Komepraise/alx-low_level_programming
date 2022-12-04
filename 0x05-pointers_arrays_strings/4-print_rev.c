#include "main.h"
#include <string.h>
/**
 * print_rev - This function prints a reverse string
 * @s: This is the input string
 */
void print_rev(char *s)
{
int i, n;
n = _strlen(s);
for
(i = n - 1;
i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

