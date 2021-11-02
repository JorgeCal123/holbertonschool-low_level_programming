#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer type struct dog
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
		return (NULL);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
                d->owner = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->my_dog.age, d->owner);
}
