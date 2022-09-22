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
 *_strncat - concatenates two strings using at least n src bytes
 *@dest: A char pointer to destination
 *@src: A char pointer to source
 *@n: at most n (integer)
 *Return: char pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = _strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
