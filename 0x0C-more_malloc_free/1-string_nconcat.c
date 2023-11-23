#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of string
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - concats twoo string until n
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: the concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1;
	unsigned int i;
	unsigned int len2, j;
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
	new = malloc((len1 + n + 1) * sizeof(char));
	if (new == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new[i] = s1[i];
	}
	if (n < len2)
	{
		for (j = 0; j < n; j++)
		{
			new[len1 + j] = s2[j];
		}
	}
	{
		for (j = 0; j <= len2; j++)
		{
			new[len1 + j] = s2[j];
		}
	}
		new[len1 + n] = '\0';
		return (new);
}
