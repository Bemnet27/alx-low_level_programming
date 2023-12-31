#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: size of the array
 * @array: the array
 * @cmp: pointer to a function
 *
 * Return: index of the array for success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
		return (-1);
}
