#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of entries
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	arr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (arr);
	}
}
