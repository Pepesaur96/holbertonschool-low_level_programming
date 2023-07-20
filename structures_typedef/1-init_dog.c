#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialuze dog structure
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
