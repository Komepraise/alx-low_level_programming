#include <stdio.h>

/**
 * main -prints recieved arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int var;

	for (var = 0; var < argc; var++)

	{
		printf("%s\n", argv[var]);
	}
	return (0);
}

