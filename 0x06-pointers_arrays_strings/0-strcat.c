#include "main.h"
int _strlen(char *s);
#include <stdio.h>

/**
 *_strlen - outputs the length of a string
 *@s: points to a character of strings
 *Return: nothing if successful
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x = x + 1;
	}
	return (x);
}
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
