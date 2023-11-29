#include "function_pointers.h"
/**
 * array_iterator - executes given paramaters
 * @array: array
 * @action: a pointer to a function
 * @size: size of an array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == 0)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
