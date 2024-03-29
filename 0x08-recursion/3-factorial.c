#include "main.h"

/**
 * factorial - calculates the factorial of a number.
 * @num: number.
 * Return: factorial of a number.
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);

	else if (num == 0)
		return (1);
	else
		return (num * factorial(num - 1));
}
