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
	int i = 0, j = 0;

	new_chandoso = malloc(sizeof(struct dog));
	if (new_chandoso == NULL)
		return (NULL);

	cp_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (cp_name == NULL)
		return (NULL);
	cp_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (cp_owner == NULL)
		return (NULL);

	while (name[i] != '\0')
	{
		cp_name[i] = name[i];
		i++;
	}
	while (owner[j] != '\0')
	{
		cp_owner[j] = owner[j];
		j++;
	}
	cp_name[i] = '\0';
	cp_owner[j] = '\0';
	new_chandoso->name = cp_name;
	new_chandoso->age = age;
	new_chandoso->owner = cp_owner;
	return (new_chandoso);
}
