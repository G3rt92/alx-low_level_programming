#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = (char *) malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;
	return ((void *)mem);
}
