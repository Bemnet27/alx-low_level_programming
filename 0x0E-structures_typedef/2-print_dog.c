#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: dog
 *
 * Return: struct
 */
void print_dog(struct dog *d)
{
	char *empty = "";

	if (d == NULL)
	{
		printf("%s\n", empty);
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if ((*d).age == 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
