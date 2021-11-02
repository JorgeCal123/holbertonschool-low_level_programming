#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	char *cp_name, *cp_owner;

	new_chandoso = malloc(sizeof(struct dog));
	if (new_chandoso == NULL)
		return (NULL);
	cp_name = malloc(sizeof(char) * (strlen(name)));
	if (cp_name == NULL)
		return (NULL);
	cp_owner = malloc(sizeof(char) * (strlen(owner)));
	if (cp_owner == NULL)
		return (NULL);

	while (*name)
		*cp_name++ = *name++;
	while (*owner)
		*cp_owner++ = *owner++;
	new_chandoso->name = name;
	new_chandoso->age = age;
	new_chandoso->owner = owner;
	return (new_chandoso);
}
