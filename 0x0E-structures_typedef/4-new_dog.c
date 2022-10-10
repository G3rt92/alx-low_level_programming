#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	name_len = 0;
	owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	d1->name = malloc(name_len * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(owner_len * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
