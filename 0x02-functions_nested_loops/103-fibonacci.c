#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the irst 50 fibonacci numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibno;
	float sum;

	while (fibno < 4000000)
	{
		fibno = fib1 + fib2;
		if ((fibno % 2) == 0)
			sum += fibno;
		fib1 = fib2;
		fib2 = fibno;
	}
	printf("%.0f\n", sum);
	return 0;

}
