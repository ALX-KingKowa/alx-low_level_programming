#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a dog structure
 * @d: an instance of a dog structure.
 * @name: The name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
