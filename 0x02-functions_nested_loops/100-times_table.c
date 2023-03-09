#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int x, y, z;

	if

		(n < 15 || n > 0)
	{

		for (x = 0;
			 x <= n;
			 x++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (y = 1;
				 y <= n;
				 y++)
			{
				z = (x * y);
				if
					((z / 10) > 0)
				{
					_putchar((z / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((z % 10) + '0');
				if
					(y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
