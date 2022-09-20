#include "main.h"
/**
 *rev_string - outputs a reversed string
 *@s: points to string char
 * Return: nothing if succesful
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	while (length >= 1)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
