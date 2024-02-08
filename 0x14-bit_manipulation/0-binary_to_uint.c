#include "main.h"
#include <stddef.h>
/**
 * binary_to_unit - converts binary number to unsigned int
 * @b: pointer to string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned uint = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		uint = uint * 2 + (b[i] - '0');
	}
	return (uint);
}
