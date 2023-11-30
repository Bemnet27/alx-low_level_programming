#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{	char *space = "";
	char *str;
	unsigned int i;

	va_list args;

	va_start(args, format);

	i = 0;
if (format)
{
	while (format[i])
	{
		switch (format[i])
		{	case 'c':
				printf("%s%c", space, va_arg(args, int));
						break;
			case 'i':
				printf("%s%i", space, va_arg(args, int));
						break;
			case 'f':
				printf("%s%f", space, va_arg(args, double));
						break;
			case 's':
				str = va_arg(args, char*);

				if (str == NULL)
				{	str = "(nil)";	}
				printf("%s%s", space, str);
						break;
			default:
				i++;
				continue;	}
		space = ", ";
		i++;	}
}
	printf("\n");	}
