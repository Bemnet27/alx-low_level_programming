#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2d array
 * @width: row
 * @height: column
 *
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	arr = malloc(width * sizeof(int *));
	
	if (*arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
	}
	return (arr);
}
