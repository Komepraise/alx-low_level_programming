#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, fibno;

	for (count = 0; count < 50; count++)
	{
		fibno = fib1 + fib2;
		printf("%lu", fibno);
		fib1 = fib2;
		fib2 = fibno;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
