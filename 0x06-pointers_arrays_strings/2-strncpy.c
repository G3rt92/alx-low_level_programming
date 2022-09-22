#include "main.h"
#include <stdio.h>
/**
 *_strncpy - copies two strings using at least n src bytes
 *@dest: A char pointer to destination
 *@src: A char pointer to source
 *@n: at most n (integer)
 *Return: char pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
