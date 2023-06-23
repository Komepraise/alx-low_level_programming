#include <stdio.h>

/**
 * main - print out number of arguments entered
 * @argc: number of arguments entered
 * @argv: array of arguments entered
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

