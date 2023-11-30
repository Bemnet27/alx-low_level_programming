#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: string between the numbers
 * @n: number of variable arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(args, int);

		printf("%d%s", num, separator);
	}

	num = va_arg(args, int);
	printf("%d\n", num);

		va_end(args);
}
