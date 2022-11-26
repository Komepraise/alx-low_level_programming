#include "main.h"
/**
 * more_numbers - the function name
 *
 */
void more_numbers(void)
{
	int y, x = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

