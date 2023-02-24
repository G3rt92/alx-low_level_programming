#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: where memory is stored
 *@src: where memory will be copied
 *@n: number of n bytes
 *Return: copied memory with changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
