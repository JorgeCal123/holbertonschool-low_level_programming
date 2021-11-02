#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_chandoso;

	new_chandoso = malloc(sizeof(struct dog));
	if (new_chandoso == NULL)
		return (NULL);

	new_chandoso->name = name;
        new_chandoso->age = age;
        new_chandoso->owner = owner;
	return (new_chandoso);

}
