#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - a function that initialize a variable of type struct dog
 *
 *@d: struct dog
 *@name: pointer
 *@age: float
 *@owner: pointer
 *Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}	
