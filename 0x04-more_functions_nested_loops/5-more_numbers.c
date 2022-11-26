#include "main.h"
/**
 * more_numbers - the function name
 *
 */
void more_numbers(void)
{
	int x = 0;
	int y = 0;

	for (; x < 10; x++)
	{
		for (; y < 15; y++)
		{
			if (y >= 10)
			_putchar((y / 10) + '0');
		else
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

