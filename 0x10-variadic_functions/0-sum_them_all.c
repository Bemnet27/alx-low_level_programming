#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the given paramaters
 * @n: number of variable arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int num, sum;
	unsigned int i;

	va_list args;

	va_start(args, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);

	return (sum);
}
