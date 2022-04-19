#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: dog owner
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *store;
	int m, n;

	store = malloc(sizeof(*store));
	if (store == NULL || name == NULL || owner == NULL)
	{
		free(store);
		return (NULL);
	}
	for (m = 0; name[m]; m++)
	{
		;
	}
	for (n = 0; owner[n]; n++)
	{
		;
	}
	store->name = malloc(m + 1);
	store->owner = malloc(n + 1);
	if (store->name == NULL || store->owner == NULL)
	{
		free(store->name);
		free(store->owner);
		free(store);
		return (NULL);
	}
	store->name = name;
	store->age = age;
	store->owner = owner;

	return (store);
}
