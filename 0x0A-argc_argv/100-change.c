#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: if the input is multiple - 1, else - 0.
 */
int main(int argc, char *argv[])
{
	int kobo, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	kobo = atoi(argv[1]);

	while (kobo > 0)
	{
		coins++;
		if ((kobo - 25) >= 0)
		{
			kobo -= 25;
			continue;
		}
		if ((kobo - 10) >= 0)
		{
			kobo -= 10;
			continue;
		}
		if ((kobo - 5) >= 0)
		{
			kobo -= 5;
			continue;
		}
		if ((kobo - 2) >= 0)
		{
			kobo -= 2;
			continue;
		}
		kobo--;
	}

	printf("%d\n", coins);

	return (0);
}
