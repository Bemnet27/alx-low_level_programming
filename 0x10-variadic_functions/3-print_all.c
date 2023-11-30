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
{
	int checker;
	char *str;
	unsigned int i;

	va_list args;

	va_start(args, format);

	i = 0;
	checker = 0;

	while (format && format[i])
	{	checker = 1;
		switch (format[i])
		{	case 'c':
				printf("%c", va_arg(args, int));
						break;
			case 'i':
				printf("%i", va_arg(args, int));
						break;
			case 'f':
				printf("%f", va_arg(args, double));
						break;
			case 's':
				str = va_arg(args, char*);

				if (str == NULL)
				{	printf("(nil)");	}
				printf("%s", str);
						break;
			default:
				checker = 0;
				break;	}
		if (format[i + 1] && checker)
		{	printf(", ");	}
		i++;	}
	printf("\n");	}
