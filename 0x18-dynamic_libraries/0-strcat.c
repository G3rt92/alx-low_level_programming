#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates two strings
 *@dest: A char pointer to destination
 *@src: A char pointer to source
 *Return: char pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = _strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
