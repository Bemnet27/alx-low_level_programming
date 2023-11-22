#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * _strdup - returns a pointer and duplicates a string
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	new = malloc((len + 1) * sizeof(char));

	if (new == 0)
	{
		return (0);
	}
		for (i = 0; i <= len; i++)
		{
			new[i] = str[i];
		}

			return (new);
}
