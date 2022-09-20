#include "main.c"
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
 *print_rev - prints a reversed string
 *@s: points to a character of strings
 *Return: nothing if successful
 */

void print_rev(char *s)
{
	int len = _strlenz(s);

	while (len > 0)
	{
		putchar(s[len - 1]);
		len--;
	}
}
