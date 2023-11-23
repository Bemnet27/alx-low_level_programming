#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns a pointer
 * @b: size
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == 0)
	{
		exit(98);
	}
	return (a);
}
