#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: The size of the array being created.
 * @c: The specific char to create the array
 * Return: for size == 0 or the function fails - NULL.
 *         else - a pointer to the array.
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
