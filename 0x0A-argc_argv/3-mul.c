#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the number of inputs
 * @argv: the array of inputs
 * @_1stno: the first number
 * @_2ndno: the second number
 * @ans: the answer
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int _1stno, _2ndno, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	_1stno = atoi(argv[1]);
	_2ndno = atoi(argv[2]);
	ans = _1stno * _2ndno;

	printf("%d\n", ans);

	return (0);
}
