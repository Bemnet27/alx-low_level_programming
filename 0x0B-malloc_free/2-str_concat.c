#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len;
	len = 0;

	while (str == NULL || str[len] != '\0')
	{
		len++;
	}
	return len;
}

/**
 * str_concat - concatenates
 * @s1: string 1
 * @s2: string 2
 *
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i, j;
	char *new;
	char *nul = "";

	if (s1 == NULL)
	{
		s1 = nul;
	}
	if (s2 == NULL)
	{
		s2 = nul;
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	new = malloc((len1 + len2 + 1) * sizeof(char));

	if (new == 0)
	{
		return (0);
	}

	for (i = 0; i <= len1; i++)
	{
		new[i] = s1[i];
	}

	for (j = 0; j <= len2; j++)
	{
		new[len1 + j] = s2[j];
	}
		new[len1 + len2] = '\0';
	return (new);
}
