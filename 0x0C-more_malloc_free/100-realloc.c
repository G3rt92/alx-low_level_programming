#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: already allocated size
 * @new_size: new size to allocate
 * Return: pointer to new allocated memory or null
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			p[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (p);
	}
	while (i < new_size)
	{
		p[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (p);
}
