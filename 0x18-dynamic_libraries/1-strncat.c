#include "main.h"
#include <stdio.h>

 /*_strncat - concatenates two strings using at least n src bytes
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
