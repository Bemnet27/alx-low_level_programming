#include "dog.h"
/**
 * init_dog - initializes the struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
