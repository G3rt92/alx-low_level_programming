#include "main.h"
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

