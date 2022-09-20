#include "main.h"
#include <stdio.h>
/**
 *_strcpy - copies a string pointed by source
 *@dest: points to char
 *@src: points to char
 *Return: nothing if successful
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int x = 0;

	while (src[w] != '\0')
	{
		w++;
	}
	for ( ; x < w ; x++)
	{
		dest[x] = src[x];
	}
	dest[w] = '\0';

	return (dest);
}
