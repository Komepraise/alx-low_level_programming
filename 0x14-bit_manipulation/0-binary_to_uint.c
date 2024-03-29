#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)

{
	int loop_cnt;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (loop_cnt = 0; b[loop_cnt]; loop_cnt++)
	{
		if (b[loop_cnt] < '0' || b[loop_cnt] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[loop_cnt] - '0');
	}

	return (dec_val);
}

