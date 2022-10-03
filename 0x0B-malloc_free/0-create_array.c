#include "main.h"
#include <stdlib.h>
/**
 * create_array - write a function that creates  char
 * @size: parameter for the size
 * @c: parameter for the data type
 * Return: null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return ("NULL");

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	free(array);
	return (array);
}
