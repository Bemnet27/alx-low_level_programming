#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and
 * initializes it with a specified character
 * @size: size of the array
 * @c: the initial character
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char));

		for (i = 0; i <= size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
